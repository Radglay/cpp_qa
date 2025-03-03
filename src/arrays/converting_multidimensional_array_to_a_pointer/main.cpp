#include <iostream>


void func(int* arr)
{
    for (int i = 0; i < 4; ++i)
        std::cout << arr[i] << ' ';
}

int main()
{
    int arr[4][2] {};
    func(arr);

    return 0;
}
