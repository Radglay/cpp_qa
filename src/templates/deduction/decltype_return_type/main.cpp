#include <iostream>
#include <vector>


template <typename Container, typename Index>
auto func(Container& c, Index i) -> decltype(c[i])
{
    return c[i];
}


template <typename Container, typename Index>
bool func2(Container& c, Index i)
{
    return c[i];
}

int main()
{
    std::vector<bool> vec1 = { true, true, false, false };
    std::vector vec2 = { 1, 2, 3, 4 };

    std::cout << func(vec1, 3) << '\n';
    std::cout << func(vec2, 3) << '\n';

    std::cout << func2(vec1, 3) << '\n';
    std::cout << func2(vec2, 3) << '\n';


    return 0;
}

