#pragma once

#include <iostream>


class Base
{
public:    
    virtual ~Base() = default;

    virtual Base* virt_func1()
    {
        std::cout << "Base virt_func1()\n";
        return this;
    }

    virtual void virt_func2()
    {
        std::cout << "Base virt_func2()\n";
    }
};

class Derived : public Base
{
public:
    Derived* virt_func1() override
    {
        std::cout << "Derived virt_func1()\n";
        return this;
    }
};
