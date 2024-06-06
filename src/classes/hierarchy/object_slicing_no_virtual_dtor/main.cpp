#include "class.h"
#include <iostream>


int main()
{
    Base* ptr = new Derived(1, 2, 3);
    delete ptr;

    return 0;
}
