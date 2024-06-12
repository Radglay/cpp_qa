#include "class.h"


int main()
{
    Derived derived;
    void (Base::*ptr)() = &Base::func;
    (derived.*ptr)();

    return 0;
}
