#include <iostream>


int main()
{
    int a;
    int* px = &a;
    int* px2 = &px;

    if (px2)
        std::cout << "Pointer is valid: " << static_cast<void*>(px2) << ' ' << *px2 << '\n';

    return 0;
}
