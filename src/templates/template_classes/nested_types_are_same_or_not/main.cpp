#include "class.h"
#include <iostream>
#include <typeinfo>


int main()
{
    auto hash1 = typeid(Base<int>::Nested).hash_code();
    auto hash2 = typeid(Base<double>::Nested).hash_code();
    
    std::cout << hash1 << '\n';
    std::cout << hash2 << '\n';
    std::cout << (hash1 == hash2) << '\n';

    return 0;
}
s