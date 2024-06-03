#include "class.h"
#include <iostream>


void funcInt(int x)
{
    std::cout << x << '\n';
}

int main()
{
    StringNumber str1 { 20 };
    int n1 = str1;
    int n2 = static_cast<int>(str1);
    funcInt(str1);

    
    return 0;
};
