#include "class.h"


int main()
{
    Derived derived;
    Base& base_ref = dynamic_cast<Base&>(derived);
    base_ref.virt_func();

    return 0;
}
