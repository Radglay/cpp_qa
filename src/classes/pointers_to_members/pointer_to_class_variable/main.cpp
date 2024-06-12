#include "class.h"


int main()
{
    Base base;
    int Base::* ptr_x = &Base::x;
    std::cout << *ptr_x << '\n';

    return 0;
}
