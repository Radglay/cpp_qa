#include "class.h"


int main()
{
    Base base;
    int* ptr_x = &base.private_x; 
    int* ptr_static_x = &base.private_static_x;

    return 0;
}
