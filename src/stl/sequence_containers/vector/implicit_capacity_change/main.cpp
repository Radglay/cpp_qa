#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};
    int* ptr = &vec[3];
 
    std::cout << "ptr val: " << *ptr << ", ptr address: " << static_cast<void*>(ptr) << '\n';
    std::cout << "vec[3] val: " << vec[3] << ", vec[3] address: "
              << static_cast<void*>(&vec[3]) << '\n';

    vec.push_back(6);

    std::cout << "ptr val: " << *ptr << ", ptr address: " << static_cast<void*>(ptr) << '\n';
    std::cout << "vec[3] val: " << vec[3] << ", vec[3] address: "
              << static_cast<void*>(&vec[3]) << '\n';
 
    return 0;
}