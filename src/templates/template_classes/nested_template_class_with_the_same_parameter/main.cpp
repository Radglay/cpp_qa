#include "class.h"
#include <iostream>


int main()
{
    auto obj = Outer<int>::Inner<int>{};
    std::cout << obj.val << '\n';
    return 0;
}
