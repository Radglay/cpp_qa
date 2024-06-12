#include "class.h"


int main()
{
    Derived derived;
    void (Base::*ptr)() = static_cast<void (Base::*)()>(&Derived::func);
    (derived.*ptr)();

    return 0;
}
