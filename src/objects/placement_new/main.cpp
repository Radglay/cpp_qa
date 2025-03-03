#include <iostream>


struct A
{
    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }

    int x = 10;
};


int main()
{
    A a;
    a.x = 99;
    int* ptr = &a.x;

    std::cout << *ptr << '\n';

    new (&a) A;
    std::cout << *ptr << '\n';

    return 0;
}

