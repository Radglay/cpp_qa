#pragma once

#include <string>
#include <iostream>


struct A
{
    A()
    {
        std::cout << "A C-tor\n";
    }
};

struct B
{
    B()
    {
        std::cout << "B C-tor\n";
    }
};

struct C
{
    C()
    {
        std::cout << "C C-tor\n";
    }
};


class Person
{
public:
    Person()
    : b(), c(), a()
    {}

    A a;
    B b;
    C c;
};
