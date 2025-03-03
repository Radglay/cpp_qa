#pragma once


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

    T* operator->()
    {
        return &val;
    }

private:
    T& val;
};
