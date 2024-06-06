#include "class.h"


int main()
{
    Base* base_ptr = new Derived1();
    base_ptr->virt_func();

    base_ptr = static_cast<Derived2*>(base_ptr);
    base_ptr->virt_func();

    return 0;
}
