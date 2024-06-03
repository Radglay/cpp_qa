#include "class.h"
#include <iostream>


IntVector& operator= (const IntVector& other)
{}


int main()
{
    IntVector vec1 { 1, 2, 3 };
    IntVector vec2 { 4, 5, 6 };

    vec1 = vec2;

    return 0;
};
