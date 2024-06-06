#pragma once

#include <iostream>


class Base
{
public:
    virtual ~Base() = default;

    virtual void virt_func()
    {
        std::cout << "Base virt_func()\n";
    }
};

class Derived1 : public Base
{
    void virt_func()
    {
        std::cout << "Derived1 virt_func()\n";
    }
};

class Derived2 : public Base
{
    void virt_func()
    {
        std::cout << "Derived2 virt_func()\n";
    }
};
