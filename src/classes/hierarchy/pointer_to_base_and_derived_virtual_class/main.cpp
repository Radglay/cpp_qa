#include "class.h"
#include <iostream>


int main()
{
    Base* ptr1 = new Base();
    std::cout << ptr1->public_x << '\n';
    ptr1->func();

    Derived* ptr2 = new Derived();
    std::cout << ptr2->public_x << '\n';
    ptr2->func();

    Base* ptr3 = new Derived();
    std::cout << ptr3->public_x << '\n';
    ptr3->func(); 

    delete ptr3;
    delete ptr2;
    delete ptr1;

    return 0;
}
