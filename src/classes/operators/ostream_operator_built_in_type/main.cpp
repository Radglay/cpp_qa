#include <iostream>
#include <string>


int main()
{
    int x { 999 };
    std::cout << x << '\n';
    std::cout.operator<<(x) << '\n';

    std::string str { "test string\n" };
    std::cout << str;
    std::cout.operator<<(str);

    return 0;
};
