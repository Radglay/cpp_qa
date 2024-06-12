#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    template <typename U>
    void templateMember();
};

template <typename T>
template <typename U>
void Base<T>::templateMember<U>()
{
    std::cout << "template member\n";
}
