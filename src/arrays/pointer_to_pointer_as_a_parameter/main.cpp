#include <iostream>


void func(int** ptr)
{
    for (int i = 0; i < 4; ++i)
        std::cout << ptr[i] << ' ';
}

int main()
{
    int arr[4][2] {};
    func(arr);

    return 0;
}
