#include "class.h"


int main()
{
    const volatile Base* base_ptr1 = new Base();
    Base* base_ptr2 = dynamic_cast<volatile Base*>(base_ptr1);

    delete base_ptr1;

    return 0;
}
