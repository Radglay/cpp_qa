#pragma once


void otherFunc(int);

template <typename T>
void func()
{
    otherFunc(1.5);
}
