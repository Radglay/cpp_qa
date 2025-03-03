#include <iostream>
#include <memory>


int main()
{
    std::shared_ptr<int> ptr1 { new int(1) };
    std::shared_ptr<int> ptr2 { new int(2) };
    
    auto ptr11 = ptr1;

    std::cout << "ptr1 use_count: " << ptr1.use_count()
              << ", ptr2 use_count: " << ptr2.use_count() << '\n';

    ptr11 = ptr2;

    std::cout << "ptr1 use_count: " << ptr1.use_count()
              << ", ptr2 use_count: " << ptr2.use_count() << '\n';

    return 0;
}

