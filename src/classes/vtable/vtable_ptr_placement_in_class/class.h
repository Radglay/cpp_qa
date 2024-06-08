#pragma once

#include <iostream>


class Base
{
public:
    int x {99};

    virtual ~Base() = default;

    virtual void virt_func1()
    {
        std::cout << "Base virt_func1()\n";
    }

    virtual void virt_func2()
    {
        std::cout << "Base virt_func2()\n";
    }
};

class Derived : public Base
{
    void virt_func1()
    {
        std::cout << "Derived1 virt_func1()\n";
    }
};
