#include <iostream>


int main()
{
    const int const_a = 10;
    auto& i = const_a;
 
    int a = 10;
    int* const ptr = &a;
    auto& i_ptr = ptr;

    std::cout << "i = " << i << '\n';
    i = 99;
    std::cout << "i = " << i << '\n';

    std::cout << "&i_ptr = " << i_ptr << '\n';
    i_ptr++;
    std::cout << "&i_ptr = " << i_ptr << '\n'; 

    return 0;
}

