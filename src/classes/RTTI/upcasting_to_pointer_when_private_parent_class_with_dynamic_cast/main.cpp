#include "class.h"


int main()
{
    Derived derived;
    Base* base_ptr = dynamic_cast<Base*>(&derived);
    base_ptr->virt_func();

    return 0;
}
