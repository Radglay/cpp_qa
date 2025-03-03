#pragma once


void otherFunc();

template <typename T>
class Base
{
public:
    void func()
    {
        otherFunc();
    }
};
