#include "class.h"
#include <iostream>


void Outer::outer_func()
{
   int x1 = Outer::Inner::inner_x;
   Inner::inner_func();
}

void Outer::Inner::inner_func()
{
    std::cout << "inner_func()\n";
}