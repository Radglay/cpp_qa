#include "class.h"
#include <iostream>


Base::~Base()
{
    std::cout << "Base D-tor\n";
}

void Derived1::print()
{
    std::cout << "Derived1 print\n";
}

Derived1::~Derived1()
{
    std::cout << "Derived1 D-tor\n";
}

void Derived2::print()
{
    std::cout << "Derived2 print\n";
}

Derived2::~Derived2()
{
    std::cout << "Derived2 D-tor\n";
}
