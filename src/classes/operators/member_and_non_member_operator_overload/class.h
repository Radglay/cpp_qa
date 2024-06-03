#pragma once

#include <iostream>


class A
{
public:
    void operator+ (const A&)
    {
        std::cout << "member function\n";
    }
};


void operator+ (const A&, const A&)
{
    std::cout << "non member function\n";
}
