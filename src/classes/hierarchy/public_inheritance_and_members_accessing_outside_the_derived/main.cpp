#include "class.h"
#include <iostream>


int main()
{
    Derived derived;
    std::cout << derived.public_x << '\n';
    std::cout << derived.protected_x << '\n';
    std::cout << derived.private_x << '\n';
    

    return 0;
}
