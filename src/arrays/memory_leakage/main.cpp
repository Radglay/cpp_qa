#include <iostream>


int main()
{
    int* arr = new int[10]{1,2,3,4,5,6,7,8,9,10};

    int& ptr = arr[0];
    arr = nullptr;

    std::cout << ptr << '\n';

    return 0;
}
