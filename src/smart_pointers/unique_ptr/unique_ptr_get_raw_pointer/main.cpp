#include <iostream>
#include <memory>
#include "class.h"



int main()
{
    auto ptr = std::unique_ptr<Base>(new Derived1);
    Base* raw_ptr = ptr.get();

    raw_ptr->print();

    return 0;
}

