#include <iostream>


struct A
{
    int x = 10;
};


int main()
{
    A a;

    // 1)
    A& ref1 = a;

    // 2)
    A& ref2 = A();

    // 3)
    const A& ref3 = A();
    
    // 4)
    A&& ref4 = A();

    return 0;
}

