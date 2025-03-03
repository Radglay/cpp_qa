#include <iostream>


void func(int* arr)
{
    std::cout << *arr << '\n';
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    func(arr);


    return 0;
}
