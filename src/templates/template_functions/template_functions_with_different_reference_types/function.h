#pragma once

#include <iostream>


template <typename T>
void func(T&, T&)
{
    std::cout << "T&, T& version\n";
}

template <typename T>
void func(T&&, T&&)
{
    std::cout << "T&&, T&& version\n";
}