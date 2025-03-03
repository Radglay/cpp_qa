#include <iostream>


template <typename T>
void func(T* t);

template <>
void func<int>(int*)
{
    std::cout << "T is int\n";
}

template <>
void func<const int>(const int*)
{
    std::cout << "T is const int\n";
}


int main()
{
    int a;
    int* ptr1 = &a;
    const int* ptr2 = &a;
    int* const ptr3 = &a;
    const int* const ptr4 = &a;

    const int b = 10;

    func(&a);
    func(&b);
    func(ptr1);
    func(ptr2);
    func(ptr3);
    func(ptr4);

    return 0;
}

