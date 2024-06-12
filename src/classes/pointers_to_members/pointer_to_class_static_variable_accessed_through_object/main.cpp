#include "class.h"


int main()
{
    Base base;
    int* ptr_x = &Base::static_x;
    std::cout << base.*ptr_x << '\n';

    return 0;
}
