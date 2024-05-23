#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    void printName();

    inline void printAge();

private:
    std::string name { "test" };
    int age { 37 };
};

void Person::printName()
{
    std::cout << "name: " << name << '\n';
}

inline void Person::printAge()
{
    std::cout << "age: " << age << '\n';
}

