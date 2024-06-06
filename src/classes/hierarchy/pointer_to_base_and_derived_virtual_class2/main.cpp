#include "class.h"
#include <iostream>


int main()
{
    Derived derived;
    Base* base = &derived;

    std::cout << derived.x << '\n';
    std::cout << derived.y << '\n';
    std::cout << derived.z << '\n';
    derived.func();
    derived.virt_func();

    std::cout << base->x << '\n';
    std::cout << base->y << '\n';
    base->func();
    base->virt_func();

    return 0;
}
