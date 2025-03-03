#include <iostream>
#include <type_traits>
#include <utility>


template <typename T> struct is_lvalue : std::false_type {};
template <typename T> struct is_lvalue<T&> : std::true_type {};
template <typename T> struct is_lvalue<T&&> : std::false_type {};


int func() { return 1; }

int main()
{
    auto ptr_func1 = func;
    decltype(func) ptr_func2;

    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(ptr_func1), int> << '\n';
    std::cout << std::is_same_v<decltype(ptr_func1), int(*)()> << '\n';
    std::cout << std::is_same_v<decltype((ptr_func1)), int(*)()> << '\n';
    std::cout << std::is_same_v<decltype((ptr_func1)), int&(*)()> << '\n';
    std::cout << std::is_same_v<decltype((ptr_func1)), int(*&)()> << '\n';
    std::cout << '\n';

    std::cout << std::is_same_v<decltype(ptr_func2), int> << '\n';
    std::cout << std::is_same_v<decltype(ptr_func2), int(*)()> << '\n';
    std::cout << std::is_same_v<decltype((ptr_func2)), int(*)()> << '\n';
    std::cout << std::is_same_v<decltype((ptr_func2)), int&(*)()> << '\n';
    std::cout << std::is_same_v<decltype((ptr_func2)), int(*&)()> << '\n';
    std::cout << '\n';


    return 0;
}

