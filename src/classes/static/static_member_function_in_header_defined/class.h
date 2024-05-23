#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    static void print();
};


void Person::print()
{
    std::cout << "print()";
}