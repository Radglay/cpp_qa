#include "class.h"
#include <iostream>


int main()
{
    Base<int> base;
    auto val = Base<int>::Values::b;
    std::cout << val << '\n';

    return 0;
}
