#include <iostream>


static int static_global = 100;

const int const_global = 200;
constexpr int constexpr_global = 300;

static const int static_const_global = 400;
static constexpr int static_constexpr_global = 500;


static void static_func()
{
    std::cout << "source1 version\n";
}

void print_source1_globals()
{
    std::cout << "print_source1_globals()\n";
    std::cout << "static_global: " << &static_global 
              << ' ' << static_global<< '\n';
    std::cout << "const_global: " << &const_global 
              << ' ' << const_global<< '\n';
    std::cout << "constexpr_global: " << &constexpr_global 
              << ' ' << constexpr_global<< '\n';
    std::cout << "static_const_global: " << &static_const_global 
              << ' ' << static_const_global<< '\n';
    std::cout << "static_constexpr_global: " << &static_constexpr_global 
              << ' ' << static_constexpr_global<< '\n';
    static_func();
}