#include "class.h"


int main()
{
    Base<int> baseInt;
    baseInt.print();

    Derived<int> derivedInt;
    derivedInt.print();

    return 0;
}
