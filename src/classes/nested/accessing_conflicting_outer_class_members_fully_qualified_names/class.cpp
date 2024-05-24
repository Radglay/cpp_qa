#include "class.h"
#include <iostream>


void Outer::common_func()
{
    std::cout << "common_func() outer version\n";
}


void Outer::Inner::common_func()
{
    std::cout << "common_func() inner version\n";
}

void Outer::Inner::inner_func()
{
    common_func();
    Inner::common_func();
    Outer::common_func();
}
