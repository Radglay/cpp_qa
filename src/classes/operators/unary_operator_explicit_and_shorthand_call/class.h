#pragma once

#include <initializer_list>
#include <algorithm>


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
    IntVector operator- ()
    {
        IntVector temp {*this};
        for (int i = 0; i < size; ++i)
            temp.arr[i] *= -1;

        return temp;
    }

    int* arr;
    int size;
};
