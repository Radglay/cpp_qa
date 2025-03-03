#include <iostream>


int main()
{
    int a = 10;
    int* const ptr = &a;

    *ptr = 99;

    std::cout << *ptr << '\n';

    return 0;
}
