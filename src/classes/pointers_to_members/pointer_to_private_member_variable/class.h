#pragma once

#include <iostream>


class Base
{
private:
    int private_x { 2 };
    static int private_static_x;
};

int Base::private_static_x = 22;
