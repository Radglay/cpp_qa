#include "class.h"
#include <iostream>


int main()
{
    Derived derived1 { 1, 2, 3 };
    Derived derived2 { 4, 5, 6 };

    Base& base = derived1;
    std::cout << "base: \n";
    std::cout << "x: " << base.x << '\n';
    std::cout << "y: " << base.y << '\n';

    base = derived2;
    std::cout << "base: \n";
    std::cout << "x: " << base.x << '\n';
    std::cout << "y: " << base.y << '\n';

    std::cout << "derived1: \n";
    std::cout << "x: " << derived1.x << '\n';
    std::cout << "y: " << derived1.y << '\n';
    std::cout << "z: " << derived1.z << '\n';


    return 0;
}
