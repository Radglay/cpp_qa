#include "class.h"
#include <iostream>
#include <algorithm>


int main()
{
    Adder add10 { 10 };
    int arr[5] { 1, 2, 3, 4, 5 };

    for (int v : arr)
        std::cout << v << ' ';
    std::cout << '\n';

    int arr2[5];
    std::transform(&arr[0], &arr[5], arr2, add10);

    for (int v : arr2)
        std::cout << v << ' ';

    return 0;
};
