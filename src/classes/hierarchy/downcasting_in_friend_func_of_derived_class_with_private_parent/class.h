#pragma once

#include <iostream>


class Base
{
public:
    virtual ~Base() = default;

    virtual void virt_func()
    {
        std::cout << "Base virtual func()\n";
    }
};

class Derived : private Base
{
public:
    friend void friendFunc();

    void virt_func()
    {
        std::cout << "Derived virtual func()\n";
    }
};
