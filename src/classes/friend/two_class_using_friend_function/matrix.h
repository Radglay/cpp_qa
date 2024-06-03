#pragma once

#include <initializer_list>
#include <algorithm>
#include <ostream>

class IntVector;

class IntMatrix
{
public:
friend IntMatrix operator+ (const IntMatrix&, const IntVector&);

    class BadDimensions {};

    IntMatrix(std::initializer_list<std::initializer_list<int>> list)
        : arr{ new int[list.size() * list.begin()->size()]}
        , rows{ list.size() }
        , columns{ list.begin()->size() }
    {
        int index {};
        if (rows != 0 and columns != 0)
        {
            for (auto row : list)
            {
                for (auto column : row)
                {
                    arr[index] = column;
                    ++index;
                }
            }
        }
    }

    IntMatrix(const IntMatrix& other)
        : arr{ new int[other.rows * other.columns]}
        , rows{ other.rows }
        , columns{ other.columns }
    {
        std::copy(other.arr, &other.arr[other.rows * other.columns], arr);
    }

    ~IntMatrix()
    {
        delete[] arr;
    }

    // operators
    friend std::ostream& operator<< (std::ostream& out, const IntMatrix& mat)
    {
        out << "IntMatrix: {\n";
        for (int r = 0; r < mat.rows; ++r)
        {
            out << "{ ";
            for (int c = 0; c < mat.columns; ++c)
            {
                out << mat.arr[r * mat.columns + c] << ' ';
            }
            out << "}\n";
        }
        out << "}\n";

        return out;
    }

private:
    int* arr;
    int rows;
    int columns;
};
