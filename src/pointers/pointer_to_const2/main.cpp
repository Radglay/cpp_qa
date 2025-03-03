#include <iostream>


int main()
{
    int a = 10;
    const int* ptr = &a;

    int b = 99;
    ptr = &b;

    std::cout << *ptr << '\n';

    return 0;
}
