#pragma once

#include <iostream>


class Base
{
public:
    virtual void virt_func();
};

class Derived : public Base
{
public:
    void virt_func() override
    {
        std::cout << "Derived virt_func()\n";
    }
};



