#pragma once

#include <initializer_list>
#include <algorithm>
#include <ostream>

class IntMatrix;


class IntVector
{
public:
friend IntMatrix operator+ (const IntMatrix&, const IntVector&);

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
    friend std::ostream& operator<< (std::ostream& out, const IntVector& vec)
    {
        out << "IntVector: { ";
        for (int i = 0; i < vec.size; ++i)
            out << vec.arr[i] << ' ';
        out << "}\n";

        return out;
    }

private:
    int* arr;
    int size;
};
