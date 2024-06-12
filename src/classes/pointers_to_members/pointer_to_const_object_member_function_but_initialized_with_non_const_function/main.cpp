#include "class.h"


int main()
{
    Base base;
    void (Base::*ptr)() const = &Base::func;

    return 0;
}
