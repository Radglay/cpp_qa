#include <iostream>


void func(int (&arr)[4])
{
    for (int i = 0; i < 1; ++i) 
        std::cout << arr[i] << '\n';
}

int main()
{
    int a = 4;
    int* arr = &a;
    func(arr);

    return 0;
}
