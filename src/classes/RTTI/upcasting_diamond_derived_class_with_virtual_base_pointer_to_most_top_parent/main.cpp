#include "class.h"


int main()
{
    Diamond diamond;
    Base* base_ptr = dynamic_cast<Diamond*>(&diamond);
    base_ptr->virt_func();

    return 0;
}
