#pragma once

#include <iostream>


class Derived;

class Base
{
public:
    Base() = default;

    Base(Derived&);
    
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
    void virt_func1()
    {
        std::cout << "Derived1 virt_func1()\n";
    }
};

Base::Base(Derived& derived)
{
    std::cout << "Base C-Tor\n";
    derived.virt_func1();
    derived.virt_func2();
}