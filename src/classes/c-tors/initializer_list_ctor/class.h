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
};


template <typename T> Container<T>::Container()
{
    std::cout << "Default C-Tor\n";
}

template <typename T> Container<T>::Container(int n)
{
    std::cout << "int C-Tor\n";
}

template <typename T> Container<T>::Container(int n, const T& t)
{
    std::cout << "int, const T& C-Tor\n";
}

template <typename T> Container<T>::Container(std::initializer_list<T> list)
{
    std::cout << "std::initializer_list C-Tor\n";
}

