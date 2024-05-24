#pragma once

class Outer
{
private:
    using Type = int;
public:
    class Inner
    {
    public:
        Inner() = default;

        void inner_func();
    };
};