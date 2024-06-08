#include "class.h"


int main()
{
    Derived derived;
    auto ptr = derived.virt_func1();
    ptr->virt_func1();

    return 0;
}
