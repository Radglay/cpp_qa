#pragma once

#include <iostream>


class Base
{
public:    
    virtual ~Base() = default;

    virtual void virt_func1(int)
    {
        std::cout << "Base virt_func1(int)\n";
    }

    virtual void virt_func2()
    {
        std::cout << "Base virt_func2()\n";
    }
};

class Derived : public Base
{
public:
    void virt_func1(double)
    {
        std::cout << "Derived virt_func1(double)\n";
    }
};
