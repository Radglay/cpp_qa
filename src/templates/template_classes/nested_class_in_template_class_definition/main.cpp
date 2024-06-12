#include "class.h"
#include <iostream>


int main()
{
    auto obj = Base<int>::Values{};
    std::cout << obj.x << '\n';

    return 0;
}
