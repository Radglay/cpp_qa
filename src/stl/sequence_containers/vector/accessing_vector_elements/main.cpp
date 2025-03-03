#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};
    
    for (int i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << ' ';
    std::cout << '\n';

    for (auto v : vec)
        std::cout << v << ' ';
    std::cout << '\n';

    return 0;
}