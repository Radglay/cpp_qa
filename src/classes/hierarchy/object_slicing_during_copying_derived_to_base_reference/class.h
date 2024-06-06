#pragma once

#include <iostream>


class Base
{
public:
    int x { 111 };
    int y { 222 };

    Base(int p_x, int p_y) : x{p_x}, y{p_y}
    {}

    virtual ~Base() = default;

    void func()
    {
        std::cout << "Base func()\n";
    }

    virtual void virt_func()
    {
        std::cout << "Base virtual func()\n";
    }
};

class Derived : public Base
{
public:
    int z { 333 };

    Derived(int p_z) : Derived(0, 0, p_z)
    {}

    Derived(int p_x, int p_y, int p_z) : Base(p_x, p_y), z{p_z}
    {}

    Derived(const Derived&) = delete;
    Derived& operator= (const Derived&) = delete;

    void virt_func()
    {
        std::cout << "Derived virtual func()\n";
    }
};
