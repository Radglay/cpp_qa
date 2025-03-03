#include <iostream>


void func(int*& ptr)
{
    std::cout << "func ptr: " << static_cast<void*>(ptr) << '\n';
    std::cout << "func &ptr: " << static_cast<void*>(&ptr) << '\n';
}

int main()
{
    int a = 10;
    int* ptr = &a;

    std::cout << "main ptr: " << static_cast<void*>(ptr) << '\n';
    std::cout << "main &ptr: " << static_cast<void*>(&ptr) << '\n';

    func(ptr);

    return 0;
}
