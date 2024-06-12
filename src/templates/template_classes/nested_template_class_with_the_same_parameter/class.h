#pragma once


template <typename T>
class Outer
{
public:
    template <typename T>
    class Inner
    {
    public:
        T val;
    };
};
