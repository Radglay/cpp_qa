#include <iostream>


struct Data
{
    Data() { std::cout << "Data C-tor\n"; }
};

union U
{
    int d1;
    Data d2;
};

int main()
{
    U u;

    return 0;
}

