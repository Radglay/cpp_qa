#include "class.h"


int main()
{
    Base base;

    void (Base::*ptr)() = &Base::func;

    return 0;
}
