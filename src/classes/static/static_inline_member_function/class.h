#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    static inline void print1();
    static void print2();
};

inline void Person::print1()
{
    std::cout << "print1()\n";
}

inline void Person::print2()
{
    std::cout << "print2()\n";
}
