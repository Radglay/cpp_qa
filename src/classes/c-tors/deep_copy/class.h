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

    Container(const Container<T>& src);
    Container<T>& operator= (const Container<T>& src);

    ~Container()
    {
        std::cout << "D-Tor\n";
        delete[] arr;
    }

private:
    T* arr;
    int size;
};


template <typename T> Container<T>::Container()
{
    std::cout << "Default C-Tor\n";
}

template <typename T> Container<T>::Container(int n)
    : arr{ new T[n]}, size{n}
{
    std::cout << "int C-Tor\n";
}

template <typename T> Container<T>::Container(int n, const T& t)
    : arr{ new T[n]}, size{n}
{
    for (int i = 0; i < n; ++i)
        arr[i] = t;
    
    std::cout << "int, const T& C-Tor\n";
}

template <typename T> Container<T>::Container(std::initializer_list<T> list)
    : arr{ new T[list.size()]}, size(list.size())
{
    std::copy(list.begin(), list.end(), arr);

    std::cout << "std::initializer_list C-Tor\n";
}

template <typename T> Container<T>::Container(const Container<T>& src)
    : arr{  new T[src.size]}, size{src.size}
{
    for (int i = 0; i < src.size; ++i)
        arr[i] = src.arr[i];
}

template <typename T> Container<T>& Container<T>::operator=(const Container<T>& src)
{
    Container<T> temp {src.size};

    for (int i = 0; i < src.size; ++i)
        temp[i] = src.arr[i];

    std::swap(*this, temp);
    
    return *this;
}