#include <iostream>


void f1(int, double) {};

template <typename T>
void func(T& t);

template <>
void func<void(int, double)>(void(&)(int, double))
{
    std::cout << "void(int, double) version\n";
}

template <>
void func<void(*)(int, double)>(void(*&)(int, double))
{
    std::cout << "void(*)(int, double) version\n";
}

int main()
{
    void (*func_ptr)(int, double) = &f1;

    auto a_func_var = f1;
    auto a_func_ptr = func_ptr;

    func(a_func_var);
    func(a_func_ptr);

    return 0;
}

