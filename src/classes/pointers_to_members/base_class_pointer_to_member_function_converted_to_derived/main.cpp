#include "class.h"


int main()
{
    Derived derived;
    void (Base::*ptr)() = &Derived::func;
    (derived.*ptr)();

    return 0;
}
