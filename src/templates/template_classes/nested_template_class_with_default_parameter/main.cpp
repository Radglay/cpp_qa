#include "class.h"
#include <iostream>


int main()
{
    auto obj = Outer<int>::Inner{};
    std::cout << obj.val << '\n';
    return 0;
}
