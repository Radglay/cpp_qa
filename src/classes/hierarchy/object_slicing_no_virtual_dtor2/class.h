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
{};

class Derived : public Base
{
public:
    Resource res;
};
