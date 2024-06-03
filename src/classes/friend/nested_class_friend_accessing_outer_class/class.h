#pragma once

#include <iostream>


class Outer
{
public:
    class Nested
    {
        friend class A;

        Outer* outer;
    };

private:
    void privateNestedFunc()
    {
        std::cout << "private Nested func()\n";
    }
};


class A
{
public:
    void func(Outer::Nested);
};



void A::func(Outer::Nested n)
{
    n.outer.privateNestedFunc();
}
