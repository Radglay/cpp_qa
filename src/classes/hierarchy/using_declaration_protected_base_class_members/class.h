#pragma once

#include <iostream>


class Base
{
protected:
    void protectedBaseFunc()
    {
        std::cout << "Protected Base func\n";
    }
};

class Derived : public Base
{
public:
    using Base::protectedBaseFunc;
};
