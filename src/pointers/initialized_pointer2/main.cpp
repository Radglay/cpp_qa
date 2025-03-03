#include <iostream>


int main()
{
    int a;
    int* px = a;

    if (px)
        std::cout << "Pointer is valid: " << static_cast<void*>(px) << ' ' << *px << '\n';

    return 0;
}
