#include <iostream>


void func(int b)
{
    int c = 30;
}

int main()
{
    {
        int a = 10;
    }

    std::cout << a << '\n';

    func(20);
    std::cout << b << '\n';

    std::cout << c << '\n';

    return 0;
}
