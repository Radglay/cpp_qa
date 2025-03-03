#include <iostream>
#include <memory>
#include <utility>


void deleter1(int* ptr)
{
    std::cout << "Deleter 1, value: " << *ptr << '\n';
    delete ptr;
}

void deleter2(int* ptr)
{
    std::cout << "Deleter 2, value: " << *ptr << '\n';
    delete ptr;
}


int main()
{
    {
        auto ptr1 = std::unique_ptr<int, void(*)(int*)>(new int(10), deleter1);
        auto ptr2 = std::unique_ptr<int, void(*)(int*)>(new int(20), deleter2);
    }
    {
        auto ptr1 = std::unique_ptr<int, void(*)(int*)>(new int(10), deleter1);
        auto ptr2 = std::unique_ptr<int, void(*)(int*)>(new int(20), deleter2);
        ptr1 = std::move(ptr2);
    }

    return 0;
}

