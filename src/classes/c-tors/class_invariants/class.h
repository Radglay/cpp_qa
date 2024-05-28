#pragma once

#include <string>


struct BadAge {};

class Person
{
public:
    Person(int p_age, const std::string& p_name)
    {
        if (p_age < 1)
        {
            throw BadAge{};
        }

        age = p_age;
        name = p_name;
    }

    int age;
    std::string name;
};
