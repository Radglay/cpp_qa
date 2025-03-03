#include <iostream>
#include <string>


int main()
{
    auto i = 10;
    auto c = 'c';
    auto s1 = "test";
    auto s2 = std::string("test");

    std::cout << std::boolalpha;
    std::cout << "i -> int? " << (typeid(i) == typeid(int)) << '\n';
    std::cout << "c -> char? " << (typeid(c) == typeid(char)) << '\n';
    std::cout << "s1 -> c_string? " << (typeid(s1) == typeid(const char*)) << '\n';
    std::cout << "s2 -> std::string? " << (typeid(s2) == typeid(std::string)) << '\n';

    return 0;
}

