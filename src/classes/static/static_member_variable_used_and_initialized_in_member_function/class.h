#pragma once

#include <string>
#include <iostream>


class Person
{
public:
    static int x;

    static void func1()
    {
        x = 1;
        std::cout << "func1(): " << x << '\n';
    } 

    void func2()
    {
        x = 2;
        std::cout << "func2(): " << x << '\n';
    } 
};
