#include <iostream>


int i = 10;

void func(int i)
{
    std::cout << i << '\n';
}

int main()
{
    std::cout << i << '\n';
    func(20);

    return 0;
}
