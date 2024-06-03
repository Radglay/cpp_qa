#include "class.h"
#include <iostream>


int main()
{
    IntVector vec1 { 1, 2, 3 };

    vec1 << std::cout;
    vec1.operator<<(std::cout);

    return 0;
};
