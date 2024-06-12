#include "function.h"
#include <iostream>


int main()
{   
    int (*ptr)(double) = convert;
    std::cout << ptr(1.5) << '\n';

    return 0;
}
