#include <iostream>


void func(int arr[10])
{
    for (int i = 0; i < 10; ++i) 
        std::cout << arr[i] << '\n';
}

int main()
{
    int arr[4] = { 1, 2, 3, 4 };
    func(arr);

    return 0;
}
