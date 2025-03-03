#include "class.h"
#include <iostream>


int main()
{
    int x = 10;
    Wrapper wrapper_int(x);
    *wrapper_int = 5;

    std::cout << "x: " << *wrapper_int << '\n';
    std::cout << *wrapper_int.operator->() << '\n';
    

    return 0;
}
