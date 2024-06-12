#pragma once

#include <iostream>


template <typename T>
class Base
{
public:
    template <typename U>
    void templateMember()
    {
        std::cout << "template member\n";
    }
};
