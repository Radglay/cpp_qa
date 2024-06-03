#include "class.h"
#include <iostream>


void funcInt(int x)
{
    std::cout << x << '\n';
}

void funcString(const std::string& str)
{
    std::cout << str << '\n';
}

void fucnDouble(double d)
{
    std::cout << d << '\n';
}

int main()
{
    StringNumber str1 { 20 };
    std::cout << str1 << '\n';
    
    StringNumber str2 { "abcd1" };
    std::cout << str2 << '\n';

    
    funcInt(str1);
    funcString(str1);
    fucnDouble(str1);

    return 0;
};
