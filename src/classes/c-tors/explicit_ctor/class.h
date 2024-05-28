#pragma once

#include <string>


struct BadAge {};

class Person
{
public:
    Person(int p_age, const std::string& p_name = "")
        : age{p_age}
        , name{p_name}
    {}

    int age;
    std::string name;
};


class ExcplicitPerson
{
public:
    explicit ExcplicitPerson(int p_age, const std::string& p_name = "")
        : age{p_age}
        , name{p_name}
    {}

    int age;
    std::string name;
};
