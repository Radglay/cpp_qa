#include <iostream>


template <unsigned N, typename... Classes>
struct select_custom;

template <unsigned N, typename T, typename... Classes>
struct select_custom<N, T, Classes...> : select_custom<N-1, Classes...>
{};

template <typename T, typename... Classes>
struct select_custom<0, T, Classes...>
{
    using type = T;
};

template <unsigned N, typename... Classes>
using Select = typename select_custom<N, Classes...>::type;

int main()
{
    std::cout << std::boolalpha;

    Select<0, int, char> type1;
    std::cout << (typeid(type1) == typeid(int)) << '\n';

    Select<2, int, char, double, float> type2;
    std::cout << (typeid(type2) == typeid(double)) << '\n';

    return 0;
}
