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

    int* int_ptr = &res;

    return 0;
}
