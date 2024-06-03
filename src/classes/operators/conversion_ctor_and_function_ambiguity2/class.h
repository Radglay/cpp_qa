#pragma once

#include <iostream>


class A
{};

class B
{
public:
    B(A)
    {
        std::cout << "B C-Tor\n";
    }

    operator A()
    {
        std::cout << "converting to A function\n";
        return A{}; 
    }
};
