#pragma once

#include <iostream>


class Derived;

class Base
{
public:    
    Base();
    virtual ~Base();

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
        std::cout << "Derived virt_func1()\n";
    }
};

Base::Base()
{
    std::cout << "Base C-Tor\n";
    if (auto ptr = dynamic_cast<Derived*>(this))
    {
        std::cout << "converted successfully\n";
        ptr->virt_func1();
        ptr->virt_func2();
    }
}

Base::~Base()
{
    std::cout << "Base D-Tor\n";
}