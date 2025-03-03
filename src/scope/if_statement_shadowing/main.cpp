#include <iostream>



int main()
{
    int i = 99;

    if (int i = 100; i != 100)
    {
        std::cout << "if: " << i << '\n';
    }
    else
    {
        std::cout << "else: " << i << '\n';
    }

    std::cout << i << '\n';

    return 0;
}
