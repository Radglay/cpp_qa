#include <iostream>
#include <vector>


template <typename Container, typename Index>
decltype(auto) func(Container&& c, Index i)
{
    return c[i];
}

int main()
{
    std::vector vec = { 1, 2, 3, 4, 5 };
    
    func(vec, 3) = 10;
    std::cout << vec[3] << '\n';

    int& ref = func(std::vector{1, 2, 3}, 2);
    std::cout << ref << '\n';

    return 0;
}

