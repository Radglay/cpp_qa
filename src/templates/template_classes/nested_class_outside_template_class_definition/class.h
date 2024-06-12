#pragma once


template <typename T>
class Base
{
public:
    class Nested;
};

template <typename T>
class Base<T>::Nested
{
public:
    int x;
};
