#include "class.h"


int main()
{
    Base base;
    Derived* derived = static_cast<Derived*>(&base);
    derived->virt_func();

    return 0;
}
