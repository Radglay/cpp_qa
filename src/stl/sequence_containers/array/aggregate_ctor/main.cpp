#include <array>
#include <iostream>


int main()
{
    std::array<int, 10> arr { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << arr.size() << '\n';
    for (auto a : arr)
        std::cout << a << ' ';
    std::cout << '\n';

    return 0;
}
