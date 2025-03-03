#include <iostream>
#include <memory>


void func(std::unique_ptr<int>& ptr)
{
    std::cout << *ptr << '\n';
}

int main()
{
    auto ptr = std::unique_ptr<int>(new int(10));
    func(ptr);

    return 0;
}

