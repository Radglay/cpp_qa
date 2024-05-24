#pragma once


class Outer
{
public:
    void outer_func();

    class Inner
    {
    public:
        Inner() = default;

        int inner_x;
        void inner_func();
    };
};