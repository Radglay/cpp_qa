#include <iostream>



void func(int*& ptr)
{
    ptr = nullptr;
}

int main()
{
    int a = 10;
    int* ptr = &a;

    func(ptr);

    if(ptr)
        std::cout << *ptr << '\n';

    return 0;
}
