#include "class.h"


int main()
{
    Base base;
    int Base::* ptr_x = &Base::x;
    std::cout << base.*ptr_x << '\n';

    return 0;
}
