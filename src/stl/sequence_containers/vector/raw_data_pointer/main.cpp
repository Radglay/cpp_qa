#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};
    int* data = vec.data();

    for (int i = 0; i < vec.size(); ++i)
        std::cout << data[i] << ' ';
    std::cout << '\n';

    return 0;
}