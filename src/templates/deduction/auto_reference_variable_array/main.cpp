#include <iostream>

template <typename T>
void func(T& t);

template <>
void func<int*>(int*&)
{
    std::cout << "pointer by reference version\n";
}

template <>
void func<int[10]>(int (&) [10])
{
    std::cout << "array of size 10 by reference version\n";
}

int main()
{
    int array[10];
    int* ptr = array;

    auto& a_array = array;
    auto& a_ptr = ptr;

    func(a_array);
    func(a_ptr);

    return 0;
}

