#include <iostream>


void func(int (&arr)[4])
{
    for (int i = 0; i < 4; ++i) 
        std::cout << arr[i] << '\n';
}

int main()
{
    int arr[4] = { 1, 2, 3, 4 };
    func(arr);

    return 0;
}
