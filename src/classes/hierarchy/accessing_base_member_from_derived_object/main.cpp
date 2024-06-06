#include "class.h"
#include <iostream>


int main()
{
    Base base;
    std::cout << base.public_x << '\n';
    base.func();

    Derived derived;
    std::cout << derived.public_x << '\n';
    derived.func();

    std::cout << derived.Base::public_x << '\n';
    derived.Base::func();

    return 0;
}
