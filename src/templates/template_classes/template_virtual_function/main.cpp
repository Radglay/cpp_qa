#include "class.h"


int main()
{
    Base baseInt;
    baseInt.print<int>();

    Derived derivedInt;
    derivedInt.print<int>();

    return 0;
}
