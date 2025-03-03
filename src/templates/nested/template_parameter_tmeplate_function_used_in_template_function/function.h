#pragma once

#include <iostream>


class Base
{
public:
    template <typename T>
    void templateFunc()
    {
        std::cout << "Base template func\n";
    }
};

template <typename T>
void func()
{
    T t;
    t.templateFunc<int>();
}
