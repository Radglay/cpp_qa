#pragma once

#include <iostream>


class A
{
private:
    void privateAFunc_1()
    {
        std::cout << "privateAFunc_1()\n";
    }
};


class B
{
public:
friend void A::privateAFunc_1();

    void func(A a)
    {
        a.privateAFunc_1();
    }
};
