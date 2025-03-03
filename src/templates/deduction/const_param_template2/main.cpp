#include <iostream>


template <typename T>
void func(const T& t)
{}

template <>
void func<int> (const int& t)
{
    std::cout << "T is int\n";
}

template <>
void func<const int> (const int& t)
{
    std::cout << "T is const int\n";
}


int main()
{
    int a;
    int& ref_a = a;
    const int b = 10;
    const int& ref_b = b;
    
    func(a);
    func(ref_a);
    func(b);
    func(ref_b);

    return 0;
}

