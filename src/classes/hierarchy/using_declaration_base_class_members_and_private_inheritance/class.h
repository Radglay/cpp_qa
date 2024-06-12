#pragma once

#include <iostream>


class Base
{
public:
    void publicBaseFunc()
    {
        std::cout << "Public Base func\n";
    }

protected:
    void protectedBaseFunc()
    {
        std::cout << "Protected Base func\n";
    }
};

class Derived : private Base
{
public:
    using Base::publicBaseFunc;
    using Base::protectedBaseFunc;
};
