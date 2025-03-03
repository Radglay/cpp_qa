#include <iostream>


extern int global;
extern int extern_global;

extern const int extern_const_global;
// extern constexpr int extern_constexpr_global;


void func();
void extern_func();


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
    // std::cout << "extern_constexpr_global: " << &extern_constexpr_global 
    //           << ' ' << extern_constexpr_global<< '\n';
    
    func();
    extern_func();

    std::cout << '\n';

    print_source1_globals();

    return 0;
}
