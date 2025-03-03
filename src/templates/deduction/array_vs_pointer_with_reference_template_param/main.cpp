#include <iostream>


template <typename T>
void func(T& t);

template <>
void func<int*>(int*&)
{
    std::cout << "T is an int*\n";
}

template <>
void func<int[]>(int[]&)
{
    std::cout << "T is an int[]\n";
}

int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr = array;

    func(array);
    func(ptr);

    return 0;
}

