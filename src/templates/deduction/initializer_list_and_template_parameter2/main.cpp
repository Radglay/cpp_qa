#include <iostream>
#include <initializer_list>


template <typename T>
void func(std::initializer_list<T>)
{
    std::cout << "initializer_list<int> version\n";

}


int main()
{
    func(std::initializer_list<int>{1, 2, 3});
    func({1, 2, 3});

    return 0;
}

