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

    std::cout << "Before release: " << *ptr << '\n';
    ptr.release();

    if (ptr)
        std::cout << "After release: " << *ptr << '\n';


    return 0;
}

