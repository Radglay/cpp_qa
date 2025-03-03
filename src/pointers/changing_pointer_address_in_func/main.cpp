#include <iostream>



void func(int* ptr)
{
    ptr = nullptr;
}

int main()
{
    int a = 10;
    int* ptr = &a;

    func(ptr);

    std::cout << *ptr << '\n';

    return 0;
}
