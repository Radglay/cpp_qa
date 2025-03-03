#include <iostream>


int main()
{
    int a = 10;
    const auto& i = a;
    const auto& i_ptr = &i;

    std::cout << "i = " << i << '\n';
    i = 99;
    std::cout << "i = " << i << '\n';

    std::cout << "&i_ptr = " << i_ptr << '\n';
    i_ptr++;
    std::cout << "&i_ptr = " << i_ptr << '\n'; 

    return 0;
}

