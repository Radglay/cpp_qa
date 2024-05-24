#pragma once


class Outer
{
public:
    static void common_func();
    static void outer_func();

public:
    class Inner
    {
    public:
        Inner() = default;

        static void common_func();
    };
};