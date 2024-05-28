#pragma once

#include <iostream>


class Base
{
public:
    Base()
    {
        std::cout << "Base default C-Tor\n";
    } 
    
    Base(int)
    {
        std::cout << "Base int C-Tor\n";
    }

    ~Base()
    {
        std::cout << "Base D-Tor\n";
    }
};


class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived default C-Tor\n";
    }

    ~Derived()
    {
        std::cout << "Derived D-Tor\n";
    }
};
