#include "class.h"


int main()
{
    Derived derived;
    void (Derived::*ptr)() = &Base::func;
    (derived.*ptr)();

    return 0;
}
