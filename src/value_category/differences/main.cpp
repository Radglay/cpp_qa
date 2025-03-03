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
    std::cout << "10 -> prvalue: " << is_prvalue<decltype(10)>::value << '\n';
    std::cout << "10 -> lvalue: " << is_lvalue<decltype(10)>::value << '\n';
    std::cout << "10 -> xvalue: " << is_xvalue<decltype(10)>::value << '\n';
    std::cout << "10 -> lvalue_reference: " << std::is_lvalue_reference<decltype(10)>::value << '\n';
    std::cout << "10 -> rvalue_reference: " << std::is_rvalue_reference<decltype(10)>::value << '\n';
    
    std::cout << '\n';

    int a { 10 };
    std::cout << "a -> prvalue: " << is_prvalue<decltype(a)>::value << '\n';
    std::cout << "a -> lvalue: " << is_lvalue<decltype(a)>::value << '\n';
    std::cout << "a -> xvalue: " << is_xvalue<decltype(a)>::value << '\n';
    std::cout << "a -> lvalue_reference: " << std::is_lvalue_reference<decltype(a)>::value << '\n';
    std::cout << "a -> rvalue_reference: " << std::is_rvalue_reference<decltype(a)>::value << '\n';
      
    std::cout << '\n';

    int& b { a };
    std::cout << "b -> prvalue: " << is_prvalue<decltype(b)>::value << '\n';
    std::cout << "b -> lvalue: " << is_lvalue<decltype(b)>::value << '\n';
    std::cout << "b -> xvalue: " << is_xvalue<decltype(b)>::value << '\n';
    std::cout << "b -> lvalue_reference: " << std::is_lvalue_reference<decltype(b)>::value << '\n';
    std::cout << "b -> rvalue_reference: " << std::is_rvalue_reference<decltype(b)>::value << '\n';

    return 0;
}
