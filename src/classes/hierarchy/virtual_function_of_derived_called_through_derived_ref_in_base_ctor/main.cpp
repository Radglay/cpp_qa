#include "class.h"


int main()
{
    Derived derived;
    Base base {derived};

    return 0;
}
