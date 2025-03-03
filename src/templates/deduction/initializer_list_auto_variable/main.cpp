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
    auto var1 = 1;
    auto var2 = 'c';
    auto var3 = { 1, 2, 3 };
    auto var4 { 1 };
    auto var5 { 'c' };
    auto var6 = { 1 };

    func(var1);
    func(var2);
    func(var3);
    func(var4);
    func(var5);
    func(var6);

    return 0;
}

