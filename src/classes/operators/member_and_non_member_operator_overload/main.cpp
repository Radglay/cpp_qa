#include "class.h"


int main()
{
    A a1, a2;
    a1 + a2;
    a1.operator+(a2);

    operator+(a1, a2);
    ::operator+(a1, a2);

    return 0;
}
