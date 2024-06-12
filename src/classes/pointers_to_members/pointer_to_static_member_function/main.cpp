#include "class.h"


int main()
{
    Base base;
    void (*ptr)() = &Base::func;
    ptr();

    return 0;
}
