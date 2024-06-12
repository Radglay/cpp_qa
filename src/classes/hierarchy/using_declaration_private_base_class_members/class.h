#pragma once

#include <iostream>


class Base
{
private:
    void privateBaseFunc()
    {
        std::cout << "Private Base func\n";
    }
};

class Derived : public Base
{
public:
    using Base::privateBaseFunc;
};
