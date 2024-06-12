#include "class.h"
#include <iostream>


int main()
{
    auto val = Base<int>::Values::c;
    std::cout << static_cast<int>(val) << '\n';

    return 0;
}
