#include <iostream>


template <typename T>
void func(T t);

template <>
void func<const int*>(const int* t)
{
    std::cout << "T is const int*\n";
    t = nullptr;
}

int main()
{
    int a = 10;
    const int* const ptr = &a;
    func(ptr);

    if (ptr)
        std::cout << *ptr << '\n';

    return 0;
}

