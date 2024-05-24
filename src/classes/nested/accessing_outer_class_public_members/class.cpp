#include "class.h"
#include <iostream>


void Outer::outer_func()
{
    std::cout << "outer_func()\n";
}


void Outer::Inner::inner_func()
{
    int x1 = outer_x;
    outer_func();
}