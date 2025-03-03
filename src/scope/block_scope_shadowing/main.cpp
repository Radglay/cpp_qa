#include <iostream>



int main()
{
    int i = 99;

    {
        int i = 11;
        std::cout << i << '\n';
    }

    std::cout << i << '\n';

    return 0;
}
