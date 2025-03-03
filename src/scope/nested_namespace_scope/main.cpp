#include <iostream>



namespace TEST
{
    int n = 10;
    namespace
    {
        int y = n;
        int z = m;
    }
    int m = 20;
}

int main()
{
    std::cout << TEST::y << '\n';
    std::cout << TEST::z << '\n';

    return 0;
}
