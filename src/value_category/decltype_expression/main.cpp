#include <iostream>
#include <type_traits>
#include <utility>


template <typename T> struct is_lvalue : std::false_type {};
template <typename T> struct is_lvalue<T&> : std::true_type {};
template <typename T> struct is_lvalue<T&&> : std::false_type {};


struct S
{
    int i;
};

int main()
{
    std::cout << std::boolalpha;

    int a { 10 };
    decltype(a) b = a;
    b = 111;
    std::cout << b << ' ' << a << '\n';

    decltype((a)) c = a;
    c = 222;
    std::cout << c << ' ' << a << '\n';

    return 0;
}

