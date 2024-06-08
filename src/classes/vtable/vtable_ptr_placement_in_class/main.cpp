#include "class.h"
#include <cstddef>


template <typename T>
std::size_t getAddressAsInt(T* t)
{
    return reinterpret_cast<std::size_t>(reinterpret_cast<int*>(t));
}

int main()
{
    std::cout << "sizeof int: " << sizeof(int) << '\n';
    std::cout << "sizeof Base: " << sizeof(Base) << '\n';
    std::cout << "sizeof Derived: " << sizeof(Derived) << '\n';

    Derived derived;
    Base* base = &derived;
    std::cout << "sizeof base: " << sizeof(*base) << '\n';


    auto base_addr = getAddressAsInt(&*base);
    auto base_x_addr = getAddressAsInt(&base->x);
    std::cout << std::hex;
    std::cout << "address of base: " << base_addr << '\n';
    std::cout << "address of base.x: " << base_x_addr << '\n';
    std::cout << "offset of base.x: " << (base_x_addr - base_addr) << '\n';

    return 0;
}
