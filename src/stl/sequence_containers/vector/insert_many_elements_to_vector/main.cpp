#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};

    int* ptr = vec.data();
    std::cout << "addr: " << ptr << ", val: " << *ptr << '\n';

    vec.insert(vec.begin(), 5, 10);

    for (int v : vec)
        std::cout << v << ' ';
    std::cout << '\n';

    std::cout << "addr: " << ptr << ", val: " << *ptr << '\n';

    return 0;
}