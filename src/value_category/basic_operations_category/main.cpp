#include <iostream>
#include <type_traits>


template <typename T> struct is_lvalue : std::false_type {};
template <typename T> struct is_lvalue<T&> : std::true_type {};
template <typename T> struct is_lvalue<T&&> : std::false_type {};



int global_x = 0;


int func() { return 1; }
int& func_ref() { return global_x; }
int&& func_r_ref() { return std::move(1); }

int main()
{
    int a = 1;
    int b = 2;

    std::cout << std::boolalpha;
    std::cout << "is lvalue?\n";
    std::cout << "a: " << is_lvalue<decltype(a)>::value << ", " << "(a): " << is_lvalue<decltype((a))>::value << '\n';
    std::cout << "a + b: " << is_lvalue<decltype(a + b)>::value << ", " << "(a + b): " << is_lvalue<decltype((a + b))>::value << '\n';
    std::cout << "a = b: " << is_lvalue<decltype(a = b)>::value << ", " << "(a = b): " << is_lvalue<decltype((a = b))>::value << '\n';
    std::cout << "a += b: " << is_lvalue<decltype(a += b)>::value << ", " << "(a += b): " << is_lvalue<decltype((a += b))>::value << '\n';
    std::cout << "a++: " << is_lvalue<decltype(a++)>::value << ", " << "(a++): " << is_lvalue<decltype((a++))>::value << '\n';
    std::cout << "++a: " << is_lvalue<decltype(++a)>::value << ", " << "(++a): " << is_lvalue<decltype((++a))>::value << '\n';
    std::cout << "&a: " << is_lvalue<decltype(&a)>::value << ", " << "(&a): " << is_lvalue<decltype((&a))>::value << '\n';
    std::cout << "static_cast<int&>(a): " << is_lvalue<decltype(static_cast<int&>(a))>::value << ", " << "(static_cast<int&>(a)): " << is_lvalue<decltype((static_cast<int&>(a)))>::value << '\n';
    std::cout << "10: " << is_lvalue<decltype(10)>::value << ", " << "(10): " << is_lvalue<decltype((10))>::value << '\n';
    std::cout << "func(): " << is_lvalue<decltype(func())>::value << ", " << "(func()): " << is_lvalue<decltype((func()))>::value << '\n';
    std::cout << "func_ref(): " << is_lvalue<decltype(func_ref())>::value << ", " << "(func_ref()): " << is_lvalue<decltype((func_ref()))>::value << '\n';
    std::cout << "func_r_ref(): " << is_lvalue<decltype(func_r_ref())>::value << ", " << "(func_r_ref()): " << is_lvalue<decltype((func_r_ref()))>::value << '\n';

    return 0;
}

