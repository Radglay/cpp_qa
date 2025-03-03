#include <iostream>
#include <memory>
#include "class.h"



int main()
{
    auto ptr1 = std::unique_ptr<Base>(new Derived1{});
    auto ptr2 = std::unique_ptr<Base>(new Derived2{});

    ptr1->print();
    ptr2->print();

    return 0;
}

