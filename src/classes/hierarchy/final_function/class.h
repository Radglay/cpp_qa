#pragma once

#include <iostream>


class Base
{
public:
    virtual void virt_func()
    {
        std::cout << "Base virt_func()\n";
    }
};

class Derived : public Base
{
public:
    void virt_func() override final
    {
        std::cout << "Derived virt_func()\n";
    }
};

class GrandDerived : public Derived
{
public:
    void virt_func() override
    {
        std::cout << "GrandDerived virt_func()\n";
    }
};
