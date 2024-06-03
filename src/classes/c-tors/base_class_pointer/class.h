#pragma once

#include <iostream>


class Base
{
public:
    Base()
    {
        std::cout << "Base C-Tor\n";
    }

    ~Base()
    {
        std::cout << "Base D-Tor\n";
    }
};


class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived C-Tor\n";
    }

    ~Derived()
    {
        std::cout << "Derived D-Tor\n";
    }
};
