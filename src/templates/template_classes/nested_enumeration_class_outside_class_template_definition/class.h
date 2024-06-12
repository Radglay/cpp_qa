#pragma once


template <typename T>
class Base
{
public:
    enum class Values;
};

template <typename T>
enum class Base<T>::Values { a, b, c };
