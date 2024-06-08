#pragma once

#include <iostream>


class Base
{
public:    
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
public:
    void virt_func1() const override
    {
        std::cout << "Derived virt_func1()\n";
    }
};
