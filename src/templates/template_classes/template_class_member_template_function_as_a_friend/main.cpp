#include "class.h"


int main()
{   
    B b;
    A<int> a;
    a.func<double>(&b);

    return 0;
}
