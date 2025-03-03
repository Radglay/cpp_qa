#include <iostream>


void func(int*)
{
    std::cout << "T is an int*\n";
}

void func(int[])
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

