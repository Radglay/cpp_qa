#include <iostream>


inline int global = 100;
inline extern int extern_global = 200;
inline extern const int extern_const_global = 300;

inline void func()
{
    std::cout << "func() source1\n";
}

inline void extern_func()
{
    std::cout << "extern_func() source1\n";
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
    
    func();
    extern_func();
}