#pragma once

#include <iostream>


class Base final
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
    void virt_func()
    {
        std::cout << "Derived virt_func(int)\n";
    }
};

