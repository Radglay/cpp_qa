#pragma once


template <typename T>
class Base
{
public:
    enum Values : int;
};

template <typename T>
enum Base<T>::Values { a, b, c };
