#include <iostream>


int a = 10;
int b = 10;

int main()
{
    int a = a;
    int b = (b=30);
    std::cout << a <<  ' ' << b << '\n';
    std::cout << ::a <<  ' ' << ::b << '\n';

    return 0;
}
