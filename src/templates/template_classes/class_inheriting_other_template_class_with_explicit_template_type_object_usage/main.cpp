#include "class.h"
#include <iostream>


int main()
{  
    Derived<int> derived;
    std::cout << derived.getElem() << '\n';

    return 0;
}
