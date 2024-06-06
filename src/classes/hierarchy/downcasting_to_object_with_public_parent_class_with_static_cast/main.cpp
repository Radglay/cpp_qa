#include "class.h"


int main()
{
    Derived derived;
    Base base = static_cast<Base>(derived);
    base.virt_func();

    return 0;
}
