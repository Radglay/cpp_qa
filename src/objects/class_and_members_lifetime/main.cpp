#include <iostream>


struct A
{
    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }
};

struct B
{
    A a;

    B() { std::cout << "B C-tor\n"; }
    ~B() { std::cout << "B D-tor\n"; }
};

struct C
{
    B b;

    C() { std::cout << "C C-tor\n"; }
    ~C() { std::cout << "C D-tor\n"; }
};

int main()
{
    C c;

    return 0;
}

