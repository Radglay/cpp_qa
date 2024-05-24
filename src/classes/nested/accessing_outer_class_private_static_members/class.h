#pragma once


class Outer
{
private:
    static int outer_x;
    static void outer_func();

public:
    class Inner
    {
    public:
        Inner() = default;

        void inner_func();
    };
};