#include <iostream>


void func(const int* ptr)
{
    std::cout << *ptr << '\n';
}

int main()
{
    int a = 10;
    int* ptr = &a;

    func(ptr);

    return 0;
}
