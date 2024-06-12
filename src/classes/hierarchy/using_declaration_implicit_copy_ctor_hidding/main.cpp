#include "class.h"
#include <type_traits>


int main()
{
    Derived derived1;
    Derived derived2 {derived1};

    std::cout << std::boolalpha;
    std::cout << std::is_trivially_copy_constructible_v<WithoutDefaultCopyCTor> << '\n';
    std::cout << std::is_trivially_copy_constructible_v<DeletedDefaultCopyCtor> << '\n';
    std::cout << std::is_trivially_copy_constructible_v<Derived> << '\n';
    
    return 0;
}
