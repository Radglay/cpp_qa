#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    void baseFunc()
    {
        std::cout << "base func with no args\n";
    }

    void baseFuncWithT(const T&)
    {
        std::cout << "base func with T arg\n";
    }
};


template <typename T>
class Derived : public Base<T>
{
public:
    using Base<T>::baseFunc;

    void func()
    {
        baseFunc();
        Base<T>::baseFuncWithT(T{});
    }
};
