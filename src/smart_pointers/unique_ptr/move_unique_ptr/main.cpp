#include <iostream>
#include <memory>
#include <utility>


void func(std::unique_ptr<int>&& ptr)
{
    std::cout << *ptr << '\n';
}

int main()
{
    auto ptr = std::unique_ptr<int>(new int(10));
    func(std::move(ptr));

    return 0;
}

