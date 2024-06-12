#include "class.h"


int main()
{
    Base base;
    void (Base::*ptr)() = &Base::func;
    (base.*ptr)();

    return 0;
}
