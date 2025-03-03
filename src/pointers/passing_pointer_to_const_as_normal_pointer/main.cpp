#include <iostream>


void func(int* ptr)
{
    std::cout << *ptr << '\n';
}

int main()
{
    int a = 10;
    const int* ptr = &a;

    func(ptr);

    return 0;
}
