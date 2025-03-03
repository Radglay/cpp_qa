#include <iostream>


template <typename T>
void func(T&&);

template <>
void func<int&>(int&)
{
    std::cout << "int& version\n";
}

template <>
void func<int>(int&&)
{
    std::cout << "int version\n";
}

int main()
{
    int a = 10;
    int& a_ref = a;


    auto&& auto_r_ref1 = 10;
    auto&& auto_r_ref2 = a;
    auto&& auto_r_ref3 = a_ref;

    func(10);
    func(a);
    func(a_ref);
    
    func(auto_r_ref1);
    func(auto_r_ref2);
    func(auto_r_ref3);

    return 0;
}

