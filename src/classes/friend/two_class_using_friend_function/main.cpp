#include "vector.h"
#include "matrix.h"
#include <iostream>


IntMatrix operator+ (const IntMatrix& mat, const IntVector& vec)
{
    if (vec.size != mat.columns)
        throw IntVector::BadSize{};
    
    IntMatrix temp {mat};
    for (int r = 0; r < mat.rows; ++r)
        for (int c = 0; c < mat.columns; ++c)
            temp.arr[r * mat.columns + c] += vec.arr[c];

    return temp;
}


int main()
{
    IntVector vec1 { 1, 2, 3 };
    std::cout << vec1;

    IntMatrix mat1 {{1, 2, 3}, {4, 5, 6}};
    std::cout << mat1;

    std::cout << (mat1 + vec1);

    return 0;
};
