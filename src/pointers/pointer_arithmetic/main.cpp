#include <iostream>


int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };

    std::cout << arr << ' ' << *arr << '\n';
    std::cout << arr + 1 << ' ' << *(arr + 1) << '\n';
    std::cout << arr + 2 << ' ' << *(arr + 2) << '\n';

    int* ptr = arr;
    ++ptr;
    ++ptr;

    std::cout << ptr << ' ' << *ptr << '\n';

    return 0;
}
