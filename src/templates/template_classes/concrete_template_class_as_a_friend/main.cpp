#include "class.h"


int main()
{   
    B b;
    A<int> aInt;
    aInt.func(&b);

    A<double> aDouble;
    aDouble.func(&b);

    return 0;
}
