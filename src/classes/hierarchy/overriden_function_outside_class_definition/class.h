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
    void virt_func() override;
};

void Derived::virt_func() override
{
    std::cout << "Derived virt_func()\n";
}


