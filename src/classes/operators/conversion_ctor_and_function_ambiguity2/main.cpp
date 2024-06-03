#include "class.h"
#include <iostream>


void func(const A&)
{}

int main()
{
    A a;

    B b1 { a };
    B b2 = a;
    static_cast<B>(a);
    func(b1);

    return 0;
};
