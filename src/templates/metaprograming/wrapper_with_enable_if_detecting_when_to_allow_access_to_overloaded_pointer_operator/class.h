#pragma once

#include <type_traits>


template <typename T>
class Wrapper
{
public:
    Wrapper(T& t)
        : val{t}
    {}

    T& operator*()
    {
        return val;
    }

    typename std::enable_if<std::is_class<T>::value, T>::type* operator->()
    {
        return &val;
    }

private:
    T& val;
};
