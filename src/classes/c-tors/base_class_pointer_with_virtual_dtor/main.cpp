#include "class.h"


int main()
{
    Base* basePtr = new Derived;
    delete basePtr;

    return 0;
};
