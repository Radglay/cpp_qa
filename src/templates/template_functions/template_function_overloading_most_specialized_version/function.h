#pragma once

#include <iostream>
#include <complex>


template <typename T>
void func(T, T)
{
    std::cout << "T, T version\n";
}

template <typename T>
void func(std::complex<T>, std::complex<T>)
{
    std::cout << "std::complex<T> version\n";
}

void func(double, double)
{
    std::cout << "double version\n";
}