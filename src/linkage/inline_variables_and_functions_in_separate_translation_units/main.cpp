#include <iostream>


inline int global = 10;
inline extern int extern_global = 20;
inline extern const int extern_const_global = 30;

inline void func()
{
    std::cout << "func() main\n";
}

inline void extern_func()
{
    std::cout << "extern_func() main\n";
}


void print_source1_globals();

int main()
{
    std::cout << "main()\n";
    std::cout << "global: " << &global 
              << ' ' << global<< '\n';
    std::cout << "extern_global: " << &extern_global 
              << ' ' << extern_global<< '\n';
    std::cout << "extern_const_global: " << &extern_const_global 
              << ' ' << extern_const_global<< '\n';
    func();
    extern_func();

    std::cout << '\n';

    print_source1_globals();

    return 0;
}
