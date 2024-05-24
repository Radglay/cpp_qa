#include "class.h"
#include <iostream>


void Outer::Inner::inner_func()
{
    std::cout << "inner_func()\n";
}