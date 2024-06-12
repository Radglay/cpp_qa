#include "class.h"


int main()
{
    Base base1;
    base1.ptr = &Base::func;

    Base base2;
    (base2.*base1.ptr)();

    return 0;
}
