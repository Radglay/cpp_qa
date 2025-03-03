#pragma once

#include <iostream>



template <typename T>
struct Data
{
public:
    T elem { 3 };
};

template <typename T>
class Derived : public Data<T>
{
public:
    T getElem()
    {
        return this->elem;
    }
};
