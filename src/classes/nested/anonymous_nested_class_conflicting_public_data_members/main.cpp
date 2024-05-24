#include "class.h"
#include <iostream>


int main()
{
    Outer outer;
    int x = outer.common_x;
    std::cout << "x: " << x << '\n';
};
