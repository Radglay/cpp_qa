#pragma once

#include <iostream>


void func()
{
    std::cout << "global version\n";
}

class Base
{
public:
    void func()
    {
        std::cout << "Base version\n";
    }
};

template <typename T>
class Derived : public T
{
public:
    void derivedFunc()
    {
        func();
    }
};
