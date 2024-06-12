#include "class.h"
#include <iostream>


int main()
{
    auto nested = Base<int>::Nested{};
    std::cout << nested.x << '\n';

    return 0;
}
