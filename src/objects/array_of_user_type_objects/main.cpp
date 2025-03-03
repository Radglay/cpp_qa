#include <iostream>


struct A
{
    A() { std::cout << "A C-tor\n"; }
    ~A() { std::cout << "A D-tor\n"; }
};



int main()
{
    A array[10];

    return 0;
}

