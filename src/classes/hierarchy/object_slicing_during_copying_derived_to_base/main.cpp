#include "class.h"
#include <iostream>


int main()
{
    Derived derived { 1, 2, 3 };
    std::cout << "x: " << derived.x << '\n';
    std::cout << "y: " << derived.y << '\n';
    derived.virt_func();

    Base base = derived;
    std::cout << "x: " << base.x << '\n';
    std::cout << "y: " << base.y << '\n';
    base.virt_func();

    return 0;
}
