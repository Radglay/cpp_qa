#pragma once

#include <iostream>


class Base
{
public:
    int x { 0x33 };

    Base()
    {
        std::cout << "Base C-Tor\n";
        virt_func1();
        virt_func2();
    }

    virtual ~Base()
    {
        std::cout << "Base D-Tor\n";
        virt_func1();
        virt_func2();
    };

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
    Derived()
    {
        std::cout << "Derived C-Tor\n";
        virt_func1();
        virt_func2();
    }

    ~Derived()
    {
        std::cout << "Derived D-Tor\n";
        virt_func1();
        virt_func2();
    };

    void virt_func1()
    {
        std::cout << "Derived1 virt_func1()\n";
    }
};
