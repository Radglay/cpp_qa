#pragma once


template <typename T>
void func()
{
    nonExistingFunc(T{});
}
