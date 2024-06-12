#pragma once

#include <iostream>


class B;

template <typename T>
class A
{
public:
    void func(B* b);
};


class B
{
friend void A::func(B*);

    void privateAFunc()
    {
        std::cout << "private A func\n";
    }
};


template <typename T>
void A<T>::func(B* b)
{
    b->privateAFunc();
}
