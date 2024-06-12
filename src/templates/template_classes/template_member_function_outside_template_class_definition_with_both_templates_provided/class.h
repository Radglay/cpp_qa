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
void Base<T>::templateMember()
{
    std::cout << "template member\n";
}
