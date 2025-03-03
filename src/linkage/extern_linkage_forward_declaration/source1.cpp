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
