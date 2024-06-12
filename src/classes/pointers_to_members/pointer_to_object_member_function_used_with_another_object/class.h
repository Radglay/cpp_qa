#pragma once

#include <iostream>


class Base
{
public:
    Base() = default;

    virtual void func()
    {
        std::cout << "Base func()\n";
    }

    virtual void func() const
    {
        std::cout << "const Base func()\n";
    }   

    void (Base::*ptr)() const;
};

class Derived : public Base
{
public:
    void func() override
    {
        std::cout << "Derived func()\n";
    }

    void func() const override
    {
        std::cout << "const Derived func()\n";
    }
};
