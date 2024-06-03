#pragma once

#include <string>

int globalInt { 50 };
std::string globalStr { "street" };

class Person
{
private:
    const std::string name;
    const int age { 30 };
    std::string& address { globalStr };
    int& number { globalInt };
};
