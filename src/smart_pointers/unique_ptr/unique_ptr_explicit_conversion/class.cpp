#include <iostream>
#include <memory>
#include "class.h"


void func(std::unique_ptr<Base> ptr)
{}

int main()
{
    Base* ptr = new Derived1();
    func(std::unique_ptr<Base>(ptr));

    ptr->print();

    return 0;
}

