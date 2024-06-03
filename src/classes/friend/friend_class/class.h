#pragma once

#include <iostream>


class B;

class A
{
public:
    void publicAFunc(B b);
};


class B
{
public:
friend class A;

private:
    void privateBFunc()
    {
        std::cout << "private B func()\n";
    }
};
    
void A::publicAFunc(B b)
{
    std::cout << "public A Func()\n";
    b.privateBFunc();
}
