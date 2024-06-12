#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    Base() = default;

    template <typename U>
    operator Base<U>()
    {
        return Base<U>{};
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
