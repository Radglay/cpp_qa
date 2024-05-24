#pragma once


class Outer
{
public:
    static int outer_x;
    static void outer_func();

    class Inner
    {
    public:
        Inner() = default;

        void inner_func();
    };
};