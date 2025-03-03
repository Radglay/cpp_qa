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

    Resource* ptr = &res;

    std::cout << (*ptr).a << ' ' << ptr->b << ' ' << ptr->c << '\n';

    return 0;
}
