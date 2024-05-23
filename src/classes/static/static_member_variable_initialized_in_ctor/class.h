#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    static int x;

    Person()
    {
        x = 1;
        std::cout << "x: " << x << '\n';
    }
};
