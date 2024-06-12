#pragma once

#include <iostream>


template <int N>
class Base
{
public:
    void print();
private:
    int val = N;
};

template <int N>
void Base<N>::print()
{
    std::cout << "val: " << val << '\n';
}
