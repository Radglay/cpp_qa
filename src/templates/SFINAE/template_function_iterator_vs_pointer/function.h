#pragma once

#include <iostream>


template <typename T>
void func(T t)
{   
    typename T::iterator iter;
    std::cout << "template function, iterator version\n";
}


template <typename T>
void func(T* t)
{
    std::cout << "template function, pointer version\n";
}
