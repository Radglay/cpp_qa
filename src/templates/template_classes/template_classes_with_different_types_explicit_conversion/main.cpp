#include "class.h"


int main()
{
    Base<int> baseInt;
    Base<double> baseDouble;

    baseInt = static_cast<Base<int>>(baseDouble);

    return 0;
}
