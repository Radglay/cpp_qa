#include <iostream>


struct A
{
    int x = 10;

    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }
    A(const A&) { std::cout << "A copy C-tor\n"; }
    A(A&&) { std::cout << "A move C-tor\n"; }
};




int main()
{
    A a = A(A(A(A(A()))));

    return 0;
}

