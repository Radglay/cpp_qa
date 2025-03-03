#include <iostream>
#include <memory>


void deleter(int* ptr)
{
    std::cout << "Deleter: " << ptr << '\n';
    // delete ptr;
}

int main()
{
    auto ptr1 = std::unique_ptr<int, decltype(&deleter)>(new int(10), deleter);
    auto ptr2 = std::unique_ptr<int, decltype(&deleter)>(new int(20), deleter);

    ptr1.reset(ptr2.get());

    std::cout << "After reset\n";

    if (ptr1)
        std::cout << "ptr1: " << *ptr1 << '\n';
    if (ptr2)
        std::cout << "ptr2: " << *ptr2 << '\n';

    return 0;
}

