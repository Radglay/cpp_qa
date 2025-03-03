#include <iostream>


extern int static_global;

extern const int const_global;
extern constexpr int constexpr_global;

extern const int static_const_global;
extern constexpr int static_constexpr_global;



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

    return 0;
}
