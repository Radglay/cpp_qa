#include <iostream>
#include <type_traits>
#include <utility>


template <typename T>
void func(T&& t);

template <>
void func<int&>(int& t)
{
    std::cout << "T is a lvalue reference\n";
}

template <>
void func<int>(int&& t)
{
    std::cout << "T is a rvalue reference\n";
}

int main()
{
    int a;
    int& ref_a = a;
    int& const_ref_a = a;
    int&& r_ref = 10;

    func(a);
    func(ref_a);
    func(const_ref_a);
    func(r_ref);
    func(10);
    func(std::move(a));

    return 0;
}

