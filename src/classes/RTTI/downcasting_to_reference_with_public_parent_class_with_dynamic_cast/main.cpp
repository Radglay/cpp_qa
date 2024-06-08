#include "class.h"


int main()
{
    Base base;
    Derived& derived_ref = dynamic_cast<Derived&>(base);
    derived_ref.virt_func();

    return 0;
}
