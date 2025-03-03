#include <iostream>
#include <memory>

void deleter(int* ptr)
{
    std::cout << "Deleter\n";
    delete ptr;
}

void func(std::shared_ptr<int> ptr)
{
    std::cout << "use_count: " << ptr.use_count() << '\n';
}

int main()
{
    auto ptr1 = std::shared_ptr<int>(new int{10}, deleter);
    auto ptr2 = ptr1;

    func(ptr1);
    std::cout << "use_count: " << ptr1.use_count() << '\n';

    ptr2.reset();

    std::cout << "use_count: " << ptr1.use_count() << '\n';

    std::cout << "is unique? " << ptr1.unique() << '\n';

    return 0;
}

