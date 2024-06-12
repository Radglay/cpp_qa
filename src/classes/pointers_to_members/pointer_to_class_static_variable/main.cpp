#include "class.h"


int main()
{
    Base base;
    int* ptr_x = &Base::static_x;
    std::cout << *ptr_x << '\n';

    return 0;
}
