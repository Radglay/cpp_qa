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

void funcDouble(double d)
{
    std::cout << d << '\n';
}

int main()
{
    StringNumber str1 { 20 };
    std::cout << str1 << '\n';
    
    StringNumber str2 { "abcd1" };
    std::cout << str2 << '\n';

    
    funcInt(static_cast<int>(str1));
    funcString(static_cast<std::string>(str1));
    funcDouble(static_cast<int>(str1));
    
    return 0;
};
