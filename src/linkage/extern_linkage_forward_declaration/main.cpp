#include <iostream>


extern int global;
extern int extern_global;

extern const int extern_const_global;
// extern constexpr int extern_constexpr_global;


void func();
void extern_func();



int main()
{
    std::cout << "main()\n";
    std::cout << "global: " << global << '\n';
    std::cout << "extern_global: " << extern_global << '\n'; 
    std::cout << "extern_const_global: " << extern_const_global << '\n';
    // std::cout << "extern_constexpr_global: " << extern_constexpr_global << '\n';

    func();
    extern_func();

    return 0;
}
