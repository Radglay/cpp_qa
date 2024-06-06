#pragma once

#include <iostream>


struct Resource
{
    Resource()
    {
        std::cout << "Resource C-Tor\n";
    }

    ~Resource()
    {
        std::cout << "Resource D-Tor\n";
    }
};

class Base
{
    virtual ~Base() = default;
};

class Derived : public Base
{
public:
    Resource res;
};
