#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};
    int a = vec.at(99);

    std::cout << a << '\n';

    return 0;
}