#include "class.h"
#include <iostream>


void printVec(const IntVector& vec)
{
    std::cout << "IntVector: { ";
    for (int i = 0; i < vec.size; ++i)
        std::cout << vec.arr[i] << ' ';
    std::cout << "}\n";
}

int main()
{
    IntVector vec1 { 4, 5, 6 };
    printVec(-vec1);
    printVec(vec1.operator-());

    return 0;
};
