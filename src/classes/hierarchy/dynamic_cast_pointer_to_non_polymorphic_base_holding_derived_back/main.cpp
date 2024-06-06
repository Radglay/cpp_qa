#include "class.h"


int main()
{
    Derived derived;
    Base* base_ptr = &derived;
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);

    return 0;
}
