#pragma once

#include <iostream>


class Base
{
public:
    virtual void virt_func1() = 0;
    virtual void virt_func2() = 0;
};

class Part1 : public Base
{
public:
    void virt_func1() override
    {
        std::cout << "Part1 virt_func1()\n";
    }
};

class Part2 : public Base
{
public:
    void virt_func2() override
    {
        std::cout << "Part2 virt_func2()\n";
    }
};

class Derived : public Part1, public Part2
{};
