#pragma once

#include <iostream>


class B;

class A
{
public:
    void publicAFunc_1(B b);
};


class B
{
public:
friend void A::publicAFunc_1(B);

    void func(A a)
    {
        a.publicAFunc_1(*this);
    }

private:
    void privateBFunc()
    {
        std::cout << "private B func()\n";
    }
};
    
void A::publicAFunc_1(B b)
{
    std::cout << "publicAFunc_1()\n";
    b.privateBFunc();
}
