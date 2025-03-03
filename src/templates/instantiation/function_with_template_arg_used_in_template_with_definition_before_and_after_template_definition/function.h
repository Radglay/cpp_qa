#pragma once


void otherFunc(int);

template <typename T>
void func()
{
    T t = 1.5;
    otherFunc(t);
}
