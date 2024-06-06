#pragma once

#include <iostream>


class Base
{
public:
    int x { 111 };
    int y { 222 };

    void func()
    {
        std::cout << "Base func()\n";
    }

    virtual void virt_func()
    {
        std::cout << "Base virtual func()\n";
    }
};

class Derived : public Base
{
public:
    int z { 333 };

    void virt_func()
    {
        std::cout << "Derived virtual func()\n";
    }
};
