#pragma once

#include <iostream>


class Base;
class Derived;

class A
{
public:
    void func(Base b);
    void func(Derived d);
};


class Base
{
friend class A;
    
    void privateBaseFunc()
    {
        std::cout << "private Base func()\n";
    }
};

class Derived : public Base
{
    void privateDerivedFunc()
    {
        std::cout << "private Derived func()\n";
    }
};

void A::func(Base b)
{
    b.privateBaseFunc();
}

void A::func(Derived d)
{
    d.privateDerivedFunc();
}