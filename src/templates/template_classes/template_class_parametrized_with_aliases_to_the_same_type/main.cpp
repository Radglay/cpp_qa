#include "class.h"
#include <typeinfo>
#include <iostream>


int main()
{
    using Type1 = int;
    using Type2 = int;

    auto hash_code1 = typeid(Base<int>).hash_code();
    auto hash_code2 = typeid(Base<Type1>).hash_code();
    auto hash_code3 = typeid(Base<Type2>).hash_code();

    std::cout << hash_code1 << '\n';
    std::cout << hash_code2 << '\n';
    std::cout << hash_code3 << '\n';

    std::cout << (hash_code1 == hash_code2) << ' '
              << (hash_code1 == hash_code3) << ' '
              << (hash_code2 == hash_code3) << '\n';

    return 0;
}
