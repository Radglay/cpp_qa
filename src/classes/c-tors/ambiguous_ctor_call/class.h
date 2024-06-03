#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    Person(char*)
    {
        std::cout << "void* version\n";
    }

    Person(int*)
    {
        std::cout << "int* version\n";
    }
};
