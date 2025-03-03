#include <iostream>
#include <initializer_list>


auto func()
{
    return { 1, 2, 3 };
}



int main()
{
    auto var1 = func();    

    std::cout << std::boolalpha << "is func returning an int? " 
                                << (typeid(func()) == typeid(std::initializer_list<int>)) << '\n';
    std::cout << std::boolalpha << "is var1 an int? "
                                << (typeid(var1) == typeid(std::initializer_list<int>)) << '\n';

    return 0;
}

