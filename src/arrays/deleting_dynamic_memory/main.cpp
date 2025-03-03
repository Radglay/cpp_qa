#include <iostream>


int main()
{
    int* arr = new int[10]{1,2,3,4,5,6,7,8,9,10};

    int& ref = arr[0];
    std::cout << ref << '\n';

    delete[] arr;
    std::cout << ref << '\n';

    return 0;
}
