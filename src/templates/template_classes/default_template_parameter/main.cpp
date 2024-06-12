#include "class.h"
#include <iostream>
#include <typeinfo>


int main()
{
    Base base;
    Base<int> baseInt ;

    auto hash1 = typeid(base).hash_code();
    auto hash2 = typeid(baseInt).hash_code();

    std::cout << hash1 << '\n';
    std::cout << hash2 << '\n';
    std::cout << (hash1 == hash2) << '\n';

    return 0;
}
