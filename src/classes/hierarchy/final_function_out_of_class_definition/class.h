#pragma once

#include <iostream>


class Base
{
public:
    virtual void virt_func() final;
};


void Base::virt_func() final
{
    std::cout << "Base virt_func()\n";
}


