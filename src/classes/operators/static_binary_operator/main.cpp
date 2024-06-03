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
    IntVector vec1 { 1, 2, 3 };
    IntVector vec2 { 1, 2, 3 };
    print(vec1 + vec2);

    return 0;
};
