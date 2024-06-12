#pragma once

#include <iostream>


class Base
{
public:
    Base()
    {
        std::cout << "Base C-Tor\n";
    }

    Base(int p_x)
        : x{p_x}
    {
        std::cout << "Base C-Tor int version\n";
    }

private:
    int x {};
};

class Derived : public Base
{
    using Base::Base;
};
