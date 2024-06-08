#include "class.h"


int main()
{
    Base base;
    Derived* derived_ptr = dynamic_cast<Derived*>(&base);
    derived_ptr->virt_func();

    return 0;
}
