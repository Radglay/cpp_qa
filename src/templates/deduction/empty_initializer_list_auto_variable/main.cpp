#include <iostream>
#include <initializer_list>


template <typename T>
void func(T);


template <>
void func<int>(int)
{
    std::cout << "int version\n";
}

template <>
void func<char>(char)
{
    std::cout << "char version\n";
}

template <>
void func<std::initializer_list<int>>(std::initializer_list<int>)
{
    std::cout << "initializer_list<int> version\n";
}

int main()
{
    auto var1 = {};
    auto var2 {};

    return 0;
}

