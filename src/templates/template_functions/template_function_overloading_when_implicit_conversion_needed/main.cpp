#include "function.h"
#include <iostream>


int max(int, double)
{
    return -99;
}

int main()
{
    std::cout << max(10.0, 10.0) << '\n';
    std::cout << max(1, 10.0) << '\n';

    return 0;
}
