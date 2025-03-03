#include <iostream>


struct Data
{
    Data() { std::cout << "Data C-tor\n"; }
};

union U
{
    U() : d2{} { std::cout << "Union C-tor\n"; }
    int d1;
    Data d2;
};

int main()
{
    U u;

    return 0;
}

