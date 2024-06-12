#include "class.h"
#include <iostream>


template <typename U>
using TemplatedBase = Base<U>;

int main()
{
    TemplatedBase<int> base;

    return 0;
}
