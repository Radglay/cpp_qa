#include "class.h"
#include <iostream>


int Outer::outer_x;

void Outer::outer_func()
{
    std::cout << "outer_static_func()\n";
}


void Outer::Inner::inner_func()
{
    int x1 = outer_x;
    outer_func();
}