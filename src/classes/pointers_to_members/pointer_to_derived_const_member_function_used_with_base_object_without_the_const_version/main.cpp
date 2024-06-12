#include "class.h"


int main()
{
    Derived derived;
    void (Derived::*ptr)() const = &Derived::func;

    (derived.*ptr)();

    Base base;
    (base.*ptr)();

    return 0;
}
