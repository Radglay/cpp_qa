#include "class.h"
#include <iostream>

void print(const IntVector& vec)
{
    std::cout << "IntVector: { ";
    for (int i = 0; i < vec.size; ++i)
        std::cout << vec.arr[i] << ' ';
    std::cout << "}\n";
}

int main()
{
    IntVector* ptr = new IntVector({ 1, 2, 3});

    delete ptr;

    return 0;
};
