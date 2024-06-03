#include "class.h"
#include <iostream>


void funcB(B)
{}

int main()
{
    funcB(A{});
    funcB(A{1});
    funcB(static_cast<A>(1));
    funcB(1);

    return 0;
};
