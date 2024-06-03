#pragma once

#include <iostream>


class B;

class A
{
public:
    A()
    {
        std::cout << "A C-Tor\n";
    }

    A(int)
    {
        std::cout << "A int C-Tor\n";
    }

    operator B();
};

class B
{
public:
    B()
    {
        std::cout << "B C-Tor\n";
    }
};

A::operator B()
{
    std::cout << "converting from A to B function\n";
    return B{}; 
}