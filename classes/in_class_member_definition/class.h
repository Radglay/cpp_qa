#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    void printName()
    {
        std::cout << "name: " << name << '\n';
    }

    inline void printAge()
    {
        std::cout << "age: " << age << '\n';
    }

private:
    std::string name { "test" };
    int age { 37 };
};
