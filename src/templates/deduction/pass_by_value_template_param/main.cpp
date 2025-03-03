#include <iostream>
#include <type_traits>
#include <utility>


template <typename T>
void func(T t);

template <>
void func<int>(int)
{
    std::cout << "T is an int\n";
}

template <>
void func<int&>(int&)
{
    std::cout << "T is a lvalue reference\n";
}

template <>
void func<const int>(const int)
{
    std::cout << "T is a const int\n";
}


int main()
{
    int a;
    const int b = 1;
    int& ref_a = a;
    const int& const_ref_a = a;

    func(a);
    func(b);
    func(ref_a);
    func(const_ref_a);

    return 0;
}

