#include "class.h"
#include <iostream>


int Outer::Inner::inner_x;

void Outer::Inner::inner_func()
{
    std::cout << "inner_func()\n";
}