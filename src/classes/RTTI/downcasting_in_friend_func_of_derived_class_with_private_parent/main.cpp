#include "class.h"


void friendFunc()
{
    Derived derived;
    Base* base_ptr = dynamic_cast<Base*>(&derived);
    Base& base_ref = dynamic_cast<Base&>(derived);

    base_ptr->virt_func();
    base_ref.virt_func();
}

int main()
{
    friendFunc();

    return 0;
}
