#include "class.h"
#include <iostream>


int main()
{
    IntVector vec1 { 1, 2, 3 };

    std::cout << vec1;
    operator<<(std::cout, vec1);

    return 0;
};
