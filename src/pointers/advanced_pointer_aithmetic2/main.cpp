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

    double* int_ptr = (double*)&res;

    std::cout << *int_ptr << '\n';
    std::cout << int_ptr[1] << '\n';

    return 0;
}
