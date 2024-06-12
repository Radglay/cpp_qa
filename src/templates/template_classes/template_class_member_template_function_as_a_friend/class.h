#pragma once

#include <iostream>


class B;

template <typename T>
class A
{
public:
    template <typename U>
    void func(B* b);
};


class B
{
template <typename T>
template <typename U>
friend void A<T>::func(B*);

    void privateAFunc()
    {
        std::cout << "private A func\n";
    }
};


template <typename T>
template <typename U>
void A<T>::func(B* b)
{
    b->privateAFunc();
}
