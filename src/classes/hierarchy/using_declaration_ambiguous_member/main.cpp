#include "class.h"


int main()
{
    Derived derived;
    derived.func();
    derived.Base::func();
    return 0;
}
