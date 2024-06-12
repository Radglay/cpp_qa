#pragma once

#include <iostream>


template <typename T>
void func(T, T)
{
    std::cout << "T, T version\n";
}

template <typename T>
void func(const T, const T)
{
    std::cout << "const T, const T version\n";
}