#include <iostream>
#include <array>


void f1(int, double) {}

template <typename T>
void func(T& t);

template <>
void func<void(int, double)>(void(&)(int, double))
{
    std::cout << "By reference\n";
}

template <>
void func<void(*)(int, double)>(void(*&)(int, double))
{
    std::cout << "By reference to pointer\n";
}

int main()
{
    void(*f1_ptr)(int, double) = f1;

    func(f1);
    func(f1_ptr);

    return 0;
}

