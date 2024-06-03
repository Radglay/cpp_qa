#pragma once


class Adder
{
public:
    Adder(int n)
        : val{n}
    {}

    int operator() (int x)
    {
        return x + val;
    }

private:
    int val;
};
