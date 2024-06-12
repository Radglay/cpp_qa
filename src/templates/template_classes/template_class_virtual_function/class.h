#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    void virtual print()
    {
        std::cout << "Base classs print\n";
    }
};

template <typename T>
class Derived : public Base<T>
{
public:
    void print() override
    {
        std::cout << "Derived classs print\n";
    }
};
