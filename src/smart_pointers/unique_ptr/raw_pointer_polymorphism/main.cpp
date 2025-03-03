#include <iostream>
#include "class.h"



int main()
{
    Base* ptr1 = new Derived1();
    Base* ptr2 = new Derived2();

    ptr1->print();
    ptr2->print();

    delete ptr2;
    delete ptr1;

    return 0;
}

