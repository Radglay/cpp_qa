#include <iostream>


int main()
{
    int a = 10;
    const int* ptr = &a;

    *ptr = 99;
    std::cout << ptr << '\n';

    return 0;
}
