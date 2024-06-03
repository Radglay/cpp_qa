#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    Person(int p_age)
    {
        Person(p_age, "");
    }

    Person(const std::string& p_name)
        : Person(0, p_name)
    {}

    Person(int p_age, const std::string& p_name)
        : age{p_age}, name{p_name}
    {
        std::cout << "main C-Tor called\n";
    }
    
    void print()
    {
        std::cout << "name: " << name << '\n'
                  << "age: " << age << '\n';
    }
private:
    int age;
    std::string name;
};
