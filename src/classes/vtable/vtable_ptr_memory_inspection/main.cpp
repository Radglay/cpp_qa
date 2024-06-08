#include "class.h"
#include <iostream>
#include <cstring>
#include <cstdint>
#include <type_traits>


template <typename T, typename S>
class vtable_checker
{
public:
    using value_type = T;
    using address_type = S;
    using pointer_type = S*;
    using const_pointer_type = const S*;

    vtable_checker(const T& t)
        : value{t}, vtable_pointer{getAddressOfVtable()}
    {}

    const_pointer_type getPointerToVtable()
    {
        return vtable_pointer;
    }

    const_pointer_type getVirtualFunctionPointer()
    {
        if (std::has_virtual_destructor_v<T>)
            return vtable_pointer + 2;
        return vtable_pointer;
    }

private:
    pointer_type getAddressOfVtable()
    {
        S buffer;
        std::memcpy(&buffer, &value, sizeof(S));
        return reinterpret_cast<pointer_type>(buffer);
    }   

    const T& value;
    S* vtable_pointer;
};


int main()
{
    std::cout << std::hex;

    Base base1;
    Base base2;
    Base base3;

    vtable_checker<Base, uint64_t> vtab_c1 {base1};
    vtable_checker<Base, uint64_t> vtab_c2 {base2};
    vtable_checker<Base, uint64_t> vtab_c3 {base3};

    auto base1_vptr = vtab_c1.getVirtualFunctionPointer();
    auto base2_vptr = vtab_c2.getVirtualFunctionPointer();
    auto base3_vptr = vtab_c3.getVirtualFunctionPointer();
    
    std::cout << base1_vptr[0] << ' ' << base1_vptr[1] << '\n';
    std::cout << base2_vptr[0] << ' ' << base2_vptr[1] << '\n';
    std::cout << base3_vptr[0] << ' ' << base3_vptr[1] << '\n';

    Derived derived1;
    vtable_checker<Derived, uint64_t> vtab_d1 {derived1};

    auto derived1_vptr = vtab_d1.getVirtualFunctionPointer();
    std::cout << derived1_vptr[0] << ' ' << derived1_vptr[1] << '\n';

    auto base_virt_func1 = reinterpret_cast<void(*)()>(base1_vptr[0]);
    auto base_virt_func2 = reinterpret_cast<void(*)()>(base1_vptr[1]);
    
    auto derived_virt_func1 = reinterpret_cast<void(*)()>(derived1_vptr[0]);
    auto derived_virt_func2 = reinterpret_cast<void(*)()>(derived1_vptr[1]);

    base_virt_func1();
    base_virt_func2();
    derived_virt_func1();
    derived_virt_func2();

    return 0;
}
