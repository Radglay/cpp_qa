#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    template <typename T>
    void templateMember()
    {
        std::cout << "template member\n";
    }
};
