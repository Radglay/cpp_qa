#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    Base() { ++x; }
    static int x;

    static void print()
    {
        std::cout << "static x: " << x << '\n';
    }
};

template <typename T>
int Base<T>::x = 0;
