#include <iostream>
#include <array>


void f1(int, double) {}

template <typename T>
void func_by_value(T t);

template <typename T>
void func_by_ref(T&);


template <>
void func_by_value<void(*)(int, double)>(void(*)(int, double))
{
    std::cout << "By value\n";
}

template <>
void func_by_ref<void(int, double)>(void(&)(int, double))
{
    std::cout << "By reference\n";
}

int main()
{
    func_by_value(f1);
    func_by_ref(f1);

    return 0;
}

