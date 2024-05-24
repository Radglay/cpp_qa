#pragma once

class Outer
{
public:
    class Inner
    {
    public:
        Inner() = default;

        void inner_func();
    };
    
    Inner inner1;
};