#include <iostream>
#include <memory>
#include <utility>



void func(std::shared_ptr<int>&& ptr)
{
    std::cout << ptr.use_count() << '\n';
}

int main()
{
    auto ptr1 = std::shared_ptr<int>(new int{10});
    auto ptr2 = ptr1;
    auto ptr3 = std::shared_ptr<int>(new int{20});
    ptr3 = ptr2;

    func(std::move(ptr1));
    std::cout << ptr2.use_count() << '\n';


    return 0;
}

