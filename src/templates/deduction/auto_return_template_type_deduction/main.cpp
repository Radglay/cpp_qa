#include <iostream>


auto func()
{
    return 1;
}



int main()
{
    auto var1 = func();    

    std::cout << std::boolalpha << "is func returning an int? " << (typeid(func()) == typeid(int)) << '\n';
    std::cout << std::boolalpha << "is var1 an int? " << (typeid(var1) == typeid(int)) << '\n';

    return 0;
}

