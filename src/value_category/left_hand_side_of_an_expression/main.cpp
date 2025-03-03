#include <iostream>


template <typename T> struct is_lvalue : std::false_type {};
template <typename T> struct is_lvalue<T&> : std::true_type {};
template <typename T> struct is_lvalue<T&&> : std::false_type {};


int main()
{
    int a;
    std::cout << std::boolalpha;
    std::cout << "a: " << is_lvalue<decltype(a)>::value << '\n';
    std::cout << "10: " << is_lvalue<decltype(10)>::value << '\n';
    
    // 1)
    a = 10;

    // 2)
    &a;

    // 3)
    a = a;

    // 4)
    10 = 20;

    // 5)
    &10;


    return 0;
}

