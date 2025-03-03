#include <iostream>
#include <type_traits>
#include <utility>


template <typename T> struct is_prvalue : std::true_type {};
template <typename T> struct is_prvalue<T&> : std::false_type {};
template <typename T> struct is_prvalue<T&&> : std::false_type {};

template <typename T> struct is_lvalue : std::false_type {};
template <typename T> struct is_lvalue<T&> : std::true_type {};
template <typename T> struct is_lvalue<T&&> : std::false_type {};

template <typename T> struct is_xvalue : std::false_type {};
template <typename T> struct is_xvalue<T&> : std::false_type {};
template <typename T> struct is_xvalue<T&&> : std::true_type {};


int main()
{
    std::cout << std::boolalpha;

    int a { 10 };
    std::cout << "a -> prvalue: " << is_prvalue<decltype((a))>::value << '\n';
    std::cout << "a -> lvalue: " << is_lvalue<decltype((a))>::value << '\n';
    std::cout << "a -> xvalue: " << is_xvalue<decltype((a))>::value << '\n';
    std::cout << "a -> lvalue_reference: " << std::is_lvalue_reference<decltype((a))>::value << '\n';
    std::cout << "a -> rvalue_reference: " << std::is_rvalue_reference<decltype((a))>::value << '\n';

    std::cout << '\n';

    int&& c { std::move(a) };
    std::cout << "std::move(a) -> prvalue: " << is_prvalue<decltype((std::move(a)))>::value << '\n';
    std::cout << "std::move(a) -> lvalue: " << is_lvalue<decltype((std::move(a)))>::value << '\n';
    std::cout << "std::move(a) -> xvalue: " << is_xvalue<decltype((std::move(a)))>::value << '\n';
    std::cout << "std::move(a) -> lvalue_reference: " << std::is_lvalue_reference<decltype((std::move(a)))>::value << '\n';
    std::cout << "std::move(a) -> rvalue_reference: " << std::is_rvalue_reference<decltype((std::move(a)))>::value << '\n';

    std::cout << '\n';

    std::cout << "c -> prvalue: " << is_prvalue<decltype((c))>::value << '\n';
    std::cout << "c -> lvalue: " << is_lvalue<decltype((c))>::value << '\n';
    std::cout << "c -> xvalue: " << is_xvalue<decltype((c))>::value << '\n';
    std::cout << "c -> lvalue_reference: " << std::is_lvalue_reference<decltype((c))>::value << '\n';
    std::cout << "c -> rvalue_reference: " << std::is_rvalue_reference<decltype((c))>::value << '\n';

    return 0;
}

