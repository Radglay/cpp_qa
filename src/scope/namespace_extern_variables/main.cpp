#include <iostream>



namespace TEST
{
    int n = 10;
    namespace NESTED
    {
        extern int y;
        extern int z;
    }
    int m = 20;
}

int TEST::NESTED::y = n;
int TEST::NESTED::z = m;

int main()
{
    std::cout << TEST::NESTED::y << '\n';
    std::cout << TEST::NESTED::z << '\n';

    return 0;
}
