#pragma once

#include <iostream>


class Base
{
public:
    virtual ~Base() = default;

    void func()
    {
        std::cout << "Base func()\n";
    }

    virtual void virt_func()
    {
        std::cout << "Base virtual func()\n";
    }
};

class Derived : private Base
{
public:
    void virt_func()
    {
        std::cout << "Derived virtual func()\n";
    }
};
