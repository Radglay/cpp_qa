#pragma once

#include <iostream>


template <typename T, typename U>
void func(const T& lhs, const U& rhs)
{
    std::cout << "success!\n";
}
