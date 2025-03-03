#include "function.h"
#include <iostream>


void otherFunc(int i)
{
    std::cout << "int version: " << i << '\n';
}

void otherFunc(double d)
{
    std::cout << "double version: " << d << '\n';
}

int main()
{
    func<int>();
    return 0;
}
