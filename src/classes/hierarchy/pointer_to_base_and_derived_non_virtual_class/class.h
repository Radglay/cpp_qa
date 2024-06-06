#pragma once

#include <iostream>


class Base
{
private:
    int private_x { 111 };
protected:
    int protected_x { 222 };
public:
    int public_x { 333 };

    void func()
    {
        std::cout << "Base func()\n";
    }
};

class Derived : public Base
{
private:
    int private_x { 1 };
protected:
    int protected_x { 2 };
public:
    int public_x { 3 };

    void func()
    {
        std::cout << "Derived func()\n";
    }
};
