#pragma once

#include <iostream>


class Base
{
public:
    virtual void virt_func() = 0;
};

class Derived : public Base
{
public:
    void virt_func(int)
    {
        std::cout << "Derived virt_func(int)\n";
    }
};



