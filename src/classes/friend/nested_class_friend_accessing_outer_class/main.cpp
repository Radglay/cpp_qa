#include "class.h"


int main()
{
    A a;
    a.func(Outer::Nested{});

    return 0;
}
