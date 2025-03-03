#pragma once


template <typename T>
class Base
{
public:
    void func()
    {
        typename T::iterator val {};
    }
};
