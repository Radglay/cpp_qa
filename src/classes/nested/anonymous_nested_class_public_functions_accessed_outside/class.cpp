#include "class.h"
#include <iostream>


void Outer::outer_func()
{
    std::cout << "outer_func()\n";
}

void Outer::common_func()
{
    std::cout << "outer common_func()\n";
}

void Outer::common_static_func()
{
    std::cout << "outer common_static_func()\n";
}
