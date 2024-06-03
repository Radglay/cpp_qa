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
    IntVector vec2 { 1, 2, 3 };

    printVec(vec1 + vec2);
    printVec(vec1 - vec2);

    printVec(vec1.operator+(vec2));
    printVec(vec1.operator-(vec2));

    return 0;
};
