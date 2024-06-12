#pragma once

#include <iostream>


class Base final
{
public:
    void virt_func();
};


void Base::virt_func() final
{
    std::cout << "Base virt_func()\n";
}


