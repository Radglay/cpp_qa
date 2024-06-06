#include "class.h"
#include <iostream>


int main()
{
    Base* ptr = new Derived();

    delete ptr;


    return 0;
}
