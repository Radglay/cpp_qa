#pragma once


class Base
{
public:
    virtual void print() = 0;
    virtual ~Base() = default;
};

class Derived1 : public Base
{
public:
    void print() override;
};

class Derived2 : public Base
{
public:
    void print() override;
};
