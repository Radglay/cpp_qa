#pragma once

#include <initializer_list>
#include <algorithm>


template <typename T>
class SimpleContainer
{};

template <typename T>
class SimpleContainer<T*>
{
public:
    SimpleContainer(int n)
        : vals{ new T*[n]}, allocated{n}
    {}

    SimpleContainer(std::initializer_list<T*> list)
        : vals{ new T*[list.size()] }, allocated{list.size()}
    {
        std::copy(list.begin(), list.end(), vals);
    }

    T accumulate()
    {
        T sum{};
        for (int i = 0; i < allocated; ++i)
            sum += *(vals[i]);
        return sum;
    }

private:
    int allocated;
    T** vals;  
};

template <>
class SimpleContainer<double*>
{
public:
    SimpleContainer(int n)
        : vals{ new double*[n]}, allocated{n}
    {}

    SimpleContainer(std::initializer_list<double*> list)
        : vals{ new double*[list.size()] }, allocated{list.size()}
    {
        std::copy(list.begin(), list.end(), vals);
    }

    double accumulate()
    {
        return 123.4;
    }

private:
    int allocated;
    double** vals;  
};
