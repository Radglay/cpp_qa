#include <iostream>


template <typename T, std::size_t N>
void func(T (&) [N])
{}

int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    func(array);

    return 0;
}

