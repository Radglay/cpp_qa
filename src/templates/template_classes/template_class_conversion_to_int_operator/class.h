#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    Base() = default;

    operator Base<int>()
    {
        return Base<int>{};
    }

    void print();
private:
    T val;
};

template <typename T>
void Base<T>::print()
{
    std::cout << "val: " << val << '\n';
}
