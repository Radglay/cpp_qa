#include "class.h"


int main()
{
    Base base;
    int* ptr_x = &base.x; 
    int* ptr_static_x = &base.static_x;

    *ptr_x = 11111111;
    std::cout << base.x << '\n';

    return 0;
}
