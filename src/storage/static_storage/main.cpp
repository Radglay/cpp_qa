#include <iostream>


static int a = 10;


class A
{
public:
    int static b;
};

int A::b = 20;


int* func()
{
    static int c = 30;
    return &c;
}


int main()
{
    int* ptr = func();

    std::cout << static_cast<void*>(&a) << ' ' << a << '\n';
    std::cout << static_cast<void*>(&A::b) << ' ' << A::b << '\n';
    std::cout << static_cast<void*>(ptr) << ' ' << *ptr << '\n';

    return 0;
}
