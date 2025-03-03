#include <iostream>


struct A
{
    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }

    int x = 10;
};

A& func()
{
    A a;

    return a;
}

int main()
{
    A a = func();
    std::cout << a.x << '\n';

    return 0;
}

