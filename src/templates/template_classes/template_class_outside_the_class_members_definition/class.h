#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    void print();
private:
    T val;
};


void Base::print()
{
    std::cout << "val: " << val << '\n';
}
