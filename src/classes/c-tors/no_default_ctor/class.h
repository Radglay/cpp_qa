#pragma once

#include <string>


class Person
{
public:
    Person(int p_age, const std::string& p_name)
        : age{p_age}
        , name{p_name}
    {}

    int age;
    std::string name;
};
