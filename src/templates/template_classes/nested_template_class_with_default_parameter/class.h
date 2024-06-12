#pragma once


template <typename T>
class Outer
{
public:
    template <typename U = T>
    class Inner
    {
    public:
        U val;
    };
};
