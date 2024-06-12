#include "class.h"


int main()
{
    Derived<int> derivedInt;
    derivedInt.func();

    Derived<double> derivedDouble;
    derivedDouble.func();

    return 0;
}
