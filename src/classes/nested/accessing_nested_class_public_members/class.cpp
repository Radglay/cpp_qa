#include "class.h"
#include <iostream>


void Outer::outer_func()
{
   int x1 = inner_x;
   inner_func();
}

void Outer::Inner::inner_func()
{
    std::cout << "inner_func()\n";
}