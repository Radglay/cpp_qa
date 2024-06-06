#include "class.h"


int main()
{
    Derived derived;
    Base& base = derived;
    base = derived;

    return 0;
}
