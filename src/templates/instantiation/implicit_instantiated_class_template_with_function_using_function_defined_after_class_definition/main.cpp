#include "class.h"
#include <iostream>

void otherFunc()
{
    std::cout << "other Func\n";
}


int main()
{
    Base<int> base;
    base.func();

    return 0;
}
