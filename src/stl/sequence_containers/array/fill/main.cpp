#include <array>
#include <iostream>


int main()
{
    std::array<int, 10> arr {};

    arr.fill(69);
    std::cout << arr.size() << '\n';
    for (auto a : arr)
        std::cout << a << ' ';
    std::cout << '\n';

    return 0;
}
