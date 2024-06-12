#include "class.h"


int main()
{
    template <typename U>
    using TemplatedBase = Base<U>;

    TemplatedBase<int> base;

    return 0;
}
