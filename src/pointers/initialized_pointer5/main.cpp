#include <iostream>


int main()
{
    int* px {};

    if (px)
        std::cout << "Pointer is valid: " << static_cast<void*>(px) << ' ' << *px << '\n';

    return 0;
}
