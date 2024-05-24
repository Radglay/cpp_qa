#include "class.h"


int main()
{
    Outer outer;
    auto inner = outer.inner1;
    inner.inner_func();
};
