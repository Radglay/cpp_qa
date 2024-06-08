#include "class.h"


int main()
{
    Derived derived;
    derived.non_existing_virt_func();

    return 0;
}
