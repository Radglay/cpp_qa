#include <iostream>
#include <array>


void f1(int, double)
{
    std::cout << "f1 int, double\n";
}

template <typename T>
void func(T t)
{
    t(1, 2.0);
}

int main()
{
    func(f1);

    return 0;
}

