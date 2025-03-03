#pragma once


void otherFunc(int);

template <typename T>
void func()
{
    T t = 1.5;
    extern void otherFunc(double);
    otherFunc(t);
}
