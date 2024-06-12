#pragma once

#include <iostream>


class Base
{
public:
    template <typename T>
    void virtual print()
    {
        std::cout << "Base classs print\n";
    }
};

class Derived : public Base
{
public:
    template <typename T>
    void print() override
    {
        std::cout << "Derived classs print\n";
    }
};
