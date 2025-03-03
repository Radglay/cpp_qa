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

    int* raw_ptr = ptr.get();
    delete raw_ptr;

    return 0;
}

