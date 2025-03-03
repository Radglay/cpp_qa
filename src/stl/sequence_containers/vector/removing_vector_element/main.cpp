#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};
    
    auto iter = vec.begin();
    iter += 1;

    std::cout << "addr: " << static_cast<void*>(&vec[3]) <<  ", val: " << vec[3] << '\n';
    std::cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << '\n';

    vec.erase(iter);
    
    std::cout << "addr: " << static_cast<void*>(&vec[3]) <<  ", val: " << vec[3] << '\n';
    std::cout << "size: " << vec.size() << ", capacity: " << vec.capacity() << '\n';

    return 0;
}