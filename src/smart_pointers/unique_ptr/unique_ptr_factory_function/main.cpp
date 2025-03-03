#include <iostream>
#include <memory>
#include "class.h"


std::unique_ptr<Base> create(int decision)
{
    std::unique_ptr<Base> ptr { nullptr };

    if (decision == 1)
        ptr.reset(new Derived1);
    else if (decision == 2)
        ptr.reset(new Derived2);
    
    return ptr;
}

int main()
{
    std::unique_ptr<Base> ptr1 = create(1);
    std::unique_ptr<Base> ptr2 = create(2);

    ptr1->print();
    ptr2->print();

    return 0;
}

