#include <vector>
#include <iostream>


int main()
{
    std::vector<int> vec;
    vec.reserve(10);

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::cout << vec.size() << ' ' << vec.capacity() << '\n';
    for (auto v : vec)
        std::cout << v << ' ';
    std::cout << '\n';

    std::cout << vec[4] << '\n';
    vec[4] = 999;
    std::cout << vec[4] << '\n';

    vec.shrink_to_fit();
    std::cout << vec[4] << '\n';

    return 0;
}
