#include "class.h"


int main()
{
    Diamond diamond;
    Base* base_ptr = dynamic_cast<Diamond*>(&diamond);

    return 0;
}
