#include <iostream>
#include <memory>


void deleter(int* param)
{
    std::cout << "Deleting int\n";
    delete param;
}

int main()
{
    {
        int* a = new int;
        std::unique_ptr<int> ptr1 {a};
        std::cout << "deleting a\n";
    }
    {
        int* b = new int;
        std::unique_ptr<int, decltype(&deleter)> ptr2 (b, deleter);
        std::cout << "deleting b\n";
    }


    return 0;
}

