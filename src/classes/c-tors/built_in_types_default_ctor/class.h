#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    void print()
    {
        std::cout << "name: " << name << '\n'
                  << "age: " << age << '\n';
    }
private:
    int age;
    std::string name;
};
