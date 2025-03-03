#include "function.h"


template<> int max(int lhs, int rhs)
{
    if (lhs > rhs)
        return lhs;
    return rhs;
}