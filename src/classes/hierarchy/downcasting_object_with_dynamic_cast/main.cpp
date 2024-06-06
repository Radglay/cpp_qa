#include "class.h"


int main()
{
    Derived derived;
    Base base = dynamic_cast<Base>(derived);
    base.virt_func();

    return 0;
}
