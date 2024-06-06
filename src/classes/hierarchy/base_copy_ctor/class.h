#pragma once

#include <iostream>


class Base
{
public:
    Base() = default;

    Base(const Base&)
    {
        std::cout << "Base copy C-Tor\n";
    }

    Base& operator= (const Base&)
    {
        std::cout << "Base copy operator\n";
        return *this;
    }

    virtual ~Base() = default;
};

class Derived : public Base
{
public:
    Derived() = default;

    Derived(const Derived&)
    {
        std::cout << "Derived copy C-Tor\n";
    }

    Derived& operator= (const Derived&)
    {
        std::cout << "Derived copy operator\n";
        return *this;
    }
};
