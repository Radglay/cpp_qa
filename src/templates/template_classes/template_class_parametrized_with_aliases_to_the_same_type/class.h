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

template <typename T>
void Base<T>::print()
{
    std::cout << "val: " << val << '\n';
}
