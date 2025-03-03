#include <iostream>


int main()
{
    auto var1 = 1;
    decltype(var1) var2 = 2;

    std::cout << std::boolalpha << "is var1 an int? " << (typeid(var1) == typeid(int)) << '\n';
    std::cout << var1 << ' ' << var2 << '\n';

    return 0;
}

