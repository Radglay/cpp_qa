#include <iostream>


void func(int* const& ptr)
{
    ptr = nullptr;
}

int main()
{
    int a = 10;
    int* const ptr = &a;

    func(ptr);

    return 0;
}
