#pragma once

#include <iostream>


class Base
{
public:
    int x { 1 };
    static int static_x;
};

int Base::static_x = 11;
