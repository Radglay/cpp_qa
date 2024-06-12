#include "class.h"


int main()
{
    Base base;
    const int* ptr1 = &base.x;

    const int Base::* ptr2 = &Base::x;

    return 0;
}
