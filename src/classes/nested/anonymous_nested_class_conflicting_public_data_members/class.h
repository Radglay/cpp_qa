#pragma once

#include <iostream>


class Outer
{
public:
    int common_x = 10;
    class
    {
    public:
        int common_x = 20;
    };
};
