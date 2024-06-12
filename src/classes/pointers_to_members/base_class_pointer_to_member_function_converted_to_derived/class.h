#pragma once

#include <iostream>


class Base
{
public:
    virtual void func()
    {
        std::cout << "Base func()\n";
    }
};

class Derived : public Base
{
public:
    void func() override
    {
        std::cout << "Derived func()\n";
    }
};
