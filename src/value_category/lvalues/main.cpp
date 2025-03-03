#include <iostream>
#include <type_traits>
#include <utility>


template <typename T> struct is_lvalue : std::false_type {};
template <typename T> struct is_lvalue<T&> : std::true_type {};
template <typename T> struct is_lvalue<T&&> : std::false_type {};


int func() { return 1; }
int* func_ptr() { static int x = 2; return &x; }
int& func_ref() { static int x = 3; return x; }
int&& func_r_ref() { return 4; }


int main()
{
    std::cout << std::boolalpha;

    int a;
    int* ptr = &a;
    int& ref = a;
    int&& r_ref = 10;

    std::cout << "a: " << is_lvalue<decltype(a)>::value << '\n';
    std::cout << "ptr: " << is_lvalue<decltype(ptr)>::value << '\n';
    std::cout << "ref: " << is_lvalue<decltype(ref)>::value << '\n';
    std::cout << "r_ref: " << is_lvalue<decltype(r_ref)>::value << '\n';
    std::cout << "func: " << is_lvalue<decltype(func)>::value << '\n';
    std::cout << "func_ptr: " << is_lvalue<decltype(func_ptr)>::value << '\n';
    std::cout << "func_ref: " << is_lvalue<decltype(func_ref)>::value << '\n';
    std::cout << "func_r_ref: " << is_lvalue<decltype(func_r_ref)>::value << '\n';

    std::cout << '\n';

    std::cout << "(a): " << is_lvalue<decltype((a))>::value << '\n';
    std::cout << "(ptr): " << is_lvalue<decltype((ptr))>::value << '\n';
    std::cout << "(ref): " << is_lvalue<decltype((ref))>::value << '\n';
    std::cout << "(r_ref): " << is_lvalue<decltype((r_ref))>::value << '\n';
    std::cout << "(func): " << is_lvalue<decltype((func))>::value << '\n';
    std::cout << "(func_ptr): " << is_lvalue<decltype((func_ptr))>::value << '\n';
    std::cout << "(func_ref): " << is_lvalue<decltype((func_ref))>::value << '\n';
    std::cout << "(func_r_ref): " << is_lvalue<decltype((func_r_ref))>::value << '\n';

    return 0;
}

