#pragma once


class Outer
{
public:
    int outer_x;

    void outer_func();

    class Inner
    {
    public:
        Inner() = default;

        void inner_func();
    };
};