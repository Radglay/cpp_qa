#include "class.h"


int main()
{
    Derived derived;
    
    Base* base = dynamic_cast<Base*>(&derived);
    base->virt_func1(1);
    base->virt_func1(1.0);

    return 0;
}
