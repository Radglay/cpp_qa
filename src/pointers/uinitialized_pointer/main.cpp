#include <iostream>


int main()
{
    int* px;

    if (px)
        std::cout << "Pointer1 is valid: " << static_cast<void*>(px) << ' ' << *px << '\n';

    return 0;
}
