#pragma once

#include <iostream>


class Base;

class A
{
public:
    void func(Base b);
};


class Base
{
friend class A;
    
    class Nested
    {
        void privateNestedFunc()
        {
            std::cout << "private Nested func()\n";
        }
    };

public:
    Nested nested;
};


void A::func(Base b)
{
    b.nested.privateNestedFunc();
}
