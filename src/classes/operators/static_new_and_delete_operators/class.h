#pragma once

#include <initializer_list>
#include <algorithm>
#include <new>


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
    static void* operator new (std::size_t sz)
    {
        if (sz == 0)
            ++sz; // avoid std::malloc(0) which may return nullptr on success
    
        if (void *ptr = std::malloc(sz))
            return ptr;
    
        throw std::bad_alloc{}; // required by [new.delete.single]/3
    }

    static void operator delete (void* ptr)
    {
        std::free(ptr);
    }


    int* arr;
    int size;
};
