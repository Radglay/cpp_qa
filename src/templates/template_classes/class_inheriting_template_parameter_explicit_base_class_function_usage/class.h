#pragma once

#include <iostream>


void func1()
{
    std::cout << "global version\n";
}

class Base
{
public:
    void func1()
    {
        std::cout << "Base version\n";
    }

    void func2()
    {
        std::cout << "Base version\n";
    }
};

template <typename T>
class Derived : public T
{
public:
    using T::func1;

    void func2()
    {
        std::cout << "Derived version\n";
    }

    void derivedFunc()
    {
        func1();
        func2();
        this->func1();
        ::func1();
        this->func2();
        T::func2();
    }
};
