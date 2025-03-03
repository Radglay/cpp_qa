#include <iostream>


int main()
{
    int a = 10;
    const int* const ptr = &a;

    *ptr = 99;
    ptr = nullptr;

    return 0;
}
