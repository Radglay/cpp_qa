#pragma once

#include <initializer_list>
#include <algorithm>
#include <ostream>


class IntVector
{
public:
    class BadSize {};

    IntVector(std::initializer_list<int> list)
        : arr{ new int[list.size()]}, size{list.size()}
    {
        std::copy(list.begin(), list.end(), arr);
    }

    IntVector(const IntVector& other)
        : arr{ new int[other.size]}, size{other.size}
    {
        std::copy(other.arr, other.arr + other.size, arr);
    }

    ~IntVector()
    {
        delete[] arr;
    }

    // operators
    static IntVector operator+ (const IntVector& lhs, const IntVector& rhs)
    {
        IntVector temp {lhs};

        for (int i = 0; i < rhs.size; ++i)
            temp.arr[i] += rhs.arr[i];

        return temp;
    }


    int* arr;
    int size;
};
