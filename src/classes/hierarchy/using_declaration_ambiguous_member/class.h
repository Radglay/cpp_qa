#pragma once

#include <iostream>


class Base
{
public:
    void func()
    {
        std::cout << "Base func()\n";
    }
};

class Derived : public Base
{
public:
    using Base::func;

    void func()
    {
        std::cout << "Derived func()\n";
    }
};
