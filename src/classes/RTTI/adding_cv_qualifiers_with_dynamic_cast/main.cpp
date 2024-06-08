#include "class.h"


int main()
{
    Base* base_ptr1 = new Base();
    const Base* base_ptr2 = dynamic_cast<const Base*>(base_ptr1);

    delete base_ptr1;

    return 0;
}
