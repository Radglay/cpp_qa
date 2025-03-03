#include <iostream>


struct A
{
    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }

    int x = 10;
};



int main()
{
    int a = 20 + A{}.x;
    std::cout << a << '\n';

    return 0;
}

