#include <iostream>


int global = 100;
extern int extern_global = 200;

extern const int extern_const_global = 300;
extern constexpr int extern_constexpr_global = 400;

void func()
{
    std::cout << "func()\n";
}

void extern_func()
{
    std::cout << "extern_func()\n";
}



void print_source1_globals()
{
    std::cout << "print_source1_globals()\n";
    std::cout << "global: " << &global 
              << ' ' << global<< '\n';
    std::cout << "extern_global: " << &extern_global 
              << ' ' << extern_global<< '\n';
    std::cout << "extern_const_global: " << &extern_const_global 
              << ' ' << extern_const_global<< '\n';
    std::cout << "extern_constexpr_global: " << &extern_constexpr_global 
              << ' ' << extern_constexpr_global<< '\n';
    
    func();
    extern_func();
}