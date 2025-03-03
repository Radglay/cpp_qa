#pragma once


class Base
{
public:
    virtual void print() = 0;
    ~Base();
};

class Derived1 : public Base
{
public:
    void print() override;
    ~Derived1();
};

class Derived2 : public Base
{
public:
    void print() override;
    ~Derived2();
};
