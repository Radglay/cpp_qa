#pragma once


class Base
{
private:
    int private_x { 111 };
protected:
    int protected_x { 222 };
public:
    int public_x { 333 };
};

class Derived : public Base
{
private:
    int private_x { 1 };
protected:
    int protected_x { 2 };
public:
    int public_x { 3 };

    int func()
    {
        return Base::private_x + Base::protected_x + Base::public_x;
    }
};
