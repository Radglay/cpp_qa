#pragma once


template <typename T>
T max(const T& lhs, const T& rhs)
{
    if (lhs > rhs)
        return lhs;
    return rhs;
}
