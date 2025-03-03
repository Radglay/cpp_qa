#include <iostream>


int main()
{
    int a = 10;
    void* ptr = &a;

    std::cout << *ptr << '\n';

    return 0;
}
