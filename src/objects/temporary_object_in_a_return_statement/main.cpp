#include <iostream>


struct A
{
    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }

    int x = 10;
};

A func()
{
    return A{};
}

int main()
{
    int a = 20 + func().x;
    std::cout << a << '\n';

    return 0;
}

