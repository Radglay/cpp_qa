#include "class.h"


void Derived::memberFunc()
{
    Derived derived;
    Base* base_ptr = dynamic_cast<Base*>(&derived);
    Base& base_ref = dynamic_cast<Base&>(derived);

    base_ptr->virt_func();
    base_ref.virt_func();
}

int main()
{
    Derived derived;
    derived.memberFunc();

    return 0;
}
