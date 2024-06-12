#include "function.h"
#include <iostream>


int main()
{
    std::cout << max(10.0, 10.0) << '\n';
    std::cout << max<int>(1, 10.0) << '\n';

    return 0;
}
