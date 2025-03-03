#include <iostream>


template <typename T>
void func(T* t);

template <>
void func<int>(int*)
{
    std::cout << "T is int\n";
}

template <>
void func<int>(int* const)
{
    std::cout << "T is int, but ptr is int* const\n";
}

int main()
{
    int a;
    int* ptr1 = &a;
    int* const ptr2 = &a;
    const int* const ptr3 = &a;

    func(&a);
    func(ptr1);
    func(ptr2);
    func(ptr3);

    return 0;
}

