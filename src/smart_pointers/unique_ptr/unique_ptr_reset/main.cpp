#include <iostream>
#include <memory>


void deleter(int* ptr)
{
    std::cout << "Deleter\n";
    delete ptr;
}

int main()
{
    auto ptr = std::unique_ptr<int, decltype(&deleter)>(new int(10), deleter);

    ptr.reset();

    std::cout << "After reset\n";
    if (ptr)
        std::cout << *ptr << '\n';

    return 0;
}

