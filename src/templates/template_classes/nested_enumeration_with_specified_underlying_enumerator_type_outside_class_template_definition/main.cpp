#include "class.h"
#include <iostream>


int main()
{
    auto val = Base<int>::Values::c;
    std::cout << val << '\n';

    return 0;
}
