#include "class.h"


int main()
{
    Derived derived;
    derived.virt_func1(1);
    derived.virt_func1(1.0);

    return 0;
}
