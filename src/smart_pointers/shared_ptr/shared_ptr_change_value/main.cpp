#include <iostream>
#include <memory>



void func(std::shared_ptr<int> ptr)
{
    *ptr = 999;
}

int main()
{
    auto ptr1 = std::shared_ptr<int>(new int{10});
    auto ptr2 = ptr1;

    func(ptr1);
    std::cout << *ptr1 << '\n';

    return 0;
}

