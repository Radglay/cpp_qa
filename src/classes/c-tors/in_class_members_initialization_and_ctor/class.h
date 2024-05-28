#pragma once

#include <string>


class Person
{
public:
    Person() 
        : age{10}
        , name{"c-tor string"}
    {}

    int age { 99 };
    std::string name { "in class string" };
};
