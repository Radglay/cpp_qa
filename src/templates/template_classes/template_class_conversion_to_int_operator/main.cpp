#include "class.h"


int main()
{
    Base<double> baseDouble;
    Base<int> baseInt;
    baseInt = static_cast<Base<int>>(baseDouble);
    

    return 0;
}
