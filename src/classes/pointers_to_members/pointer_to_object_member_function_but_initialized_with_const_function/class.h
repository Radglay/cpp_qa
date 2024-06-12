#pragma once

#include <iostream>


class Base
{
public:
    virtual void func() const
    {
        std::cout << "Base func()\n";
    }
};

class Derived : public Base
{
public:
    void func()
    {
        std::cout << "Derived func()\n";
    }

    void func() const override
    {
        std::cout << "const Derived func()\n";
    }
};
