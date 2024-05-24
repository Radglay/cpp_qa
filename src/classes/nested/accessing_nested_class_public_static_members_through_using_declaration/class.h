#pragma once


class Outer
{
public:
    void outer_func();

    class Inner
    {
    public:
        Inner() = default;

        static int inner_x;
        static void inner_func();
    };
};

