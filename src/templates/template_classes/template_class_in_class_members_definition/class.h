#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    void print()
    {
        std::cout << "val: " << val << '\n';
    }
private:
    T val;

};
