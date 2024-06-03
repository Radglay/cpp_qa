#pragma once

#include <iostream>
#include <initializer_list>


template <typename T>
class Container
{
public:
    Container();
    Container(int n);
    Container(int n, const T& t);
    Container(std::initializer_list<T> list);

    ~Container()
    {
        std::cout << "D-Tor\n";
        delete[] arr;
    }

private:
    T* arr;
};


template <typename T> Container<T>::Container()
{
    std::cout << "Default C-Tor\n";
}

template <typename T> Container<T>::Container(int n)
    : arr{ new T[n]}
{
    std::cout << "int C-Tor\n";
}

template <typename T> Container<T>::Container(int n, const T& t)
    : arr{ new T[n]}
{
    for (int i = 0; i < n; ++i)
        arr[i] = t;
    
    std::cout << "int, const T& C-Tor\n";
}

template <typename T> Container<T>::Container(std::initializer_list<T> list)
    : arr{ new T[list.size()]} 
{
    std::copy(list.begin(), list.end(), arr);

    std::cout << "std::initializer_list C-Tor\n";
}

