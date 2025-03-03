#include <iostream>


template <typename T>
void templateFunc(T t)
{
    std::cout << "templateFunc T version\n";
}

int main()
{
    templateFunc(1);
    templateFunc(2.0);

    return 0;
};


template <>
void templateFunc(double t)
{
    std::cout << "templateFunc double version\n";
}
