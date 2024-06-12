#include "class.h"
#include <typeinfo>
#include <iostream>


int main()
{
    using Type1 = int;
    using Type2 = int;

    auto hash_code1 = typeid(Base<10>).hash_code();
    auto hash_code2 = typeid(Base<5+5>).hash_code();
 
    std::cout << hash_code1 << '\n';
    std::cout << hash_code2 << '\n';

    std::cout << (hash_code1 == hash_code2) << '\n';

    return 0;
}
