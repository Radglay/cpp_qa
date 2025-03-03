#include <iostream>



int* func()
{
    int a = 99;
    return &a;
}

int main()
{
    int* ptr = func();

    std::cout << *ptr << '\n';

    return 0;
}
