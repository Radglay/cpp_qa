#pragma once


class Outer
{
public:
    void outer_func();

    class Inner
    {
    public:
        Inner() = default;

        using Type = int;
    };
};