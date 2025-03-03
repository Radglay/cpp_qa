#include <iostream>


static int static_global = 10;

const int const_global = 20;
constexpr int constexpr_global = 30;

static const int static_const_global = 40;
static constexpr int static_constexpr_global = 50;


void print_source1_globals();

static void static_func()
{
    std::cout << "main version\n";
}


int main()
{
    std::cout << "main()\n";
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

    std::cout << '\n';

    print_source1_globals();

    return 0;
}
