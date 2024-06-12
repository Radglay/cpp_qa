#include "class.h"


int main()
{
    Base<int> baseInt;
    Base<double> baseDouble;

    baseInt = baseDouble;

    return 0;
}
