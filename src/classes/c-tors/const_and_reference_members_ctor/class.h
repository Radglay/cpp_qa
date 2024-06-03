#pragma once

#include <string>


class Person
{
public:
    Person(const std::string& p_name, int p_age, std::string& p_address, int& p_number)
    {
        name = p_name;
        age = p_age;
        address = p_address;
        number = p_number;
    }

private:
    const std::string name;
    const int age;
    std::string& address;
    int& number;
};
