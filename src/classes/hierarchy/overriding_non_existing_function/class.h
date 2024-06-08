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
    void non_existing_virt_func() override
    {
         std::cout << "Derived non_existing_virt_func()\n";
    }
};
