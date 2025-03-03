#include <iostream>
#include <memory>


int main()
{
    std::shared_ptr<int> ptr1(new int(10));

    std::shared_ptr<int> ptr2(ptr1.get());

    std::cout << "ptr1 use_count: " << ptr1.use_count() << '\n';
    std::cout << "ptr2 use_count: " << ptr2.use_count() << '\n';

    return 0;
}

