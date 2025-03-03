#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};

    std::vector<int> second_vec {6, 7, 8, 9, 10};

    vec.insert(vec.end(), second_vec.begin(), second_vec.end());

    for (int v : vec)
        std::cout << v << ' ';
    std::cout << '\n';

    return 0;
}