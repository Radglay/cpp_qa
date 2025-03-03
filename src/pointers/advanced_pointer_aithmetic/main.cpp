#include <iostream>


struct Resource
{
    int a = 10;
    int b = 20;
    double c = 3.0;
};

int main()
{
    Resource res;

    int* int_ptr = (int*)&res;

    std::cout << *int_ptr << '\n';
    std::cout << int_ptr[1] << '\n';
    std::cout << int_ptr[2] << '\n';
    std::cout << int_ptr[3] << '\n';

    return 0;
}
