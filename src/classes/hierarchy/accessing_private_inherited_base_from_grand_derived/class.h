#pragma once

#include <iostream>


class Base
{
public:
    virtual void virt_func()
    {
        std::cout << "Base virt_func1()\n";
    }
};

class Derived : private Base
{};

class GrandDerived : public Derived
{
public:
    void virt_func() override
    {
        Derived::virt_func();
        std::cout << "GrandDerived virt_func1()\n";
    }
};
