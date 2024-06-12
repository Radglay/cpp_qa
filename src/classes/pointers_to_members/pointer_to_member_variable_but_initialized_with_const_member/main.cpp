#include "class.h"


int main()
{
    Base base;
    int* ptr1 = &base.const_x;

    int Base::* ptr2 = &Base::const_x;

    return 0;
}
