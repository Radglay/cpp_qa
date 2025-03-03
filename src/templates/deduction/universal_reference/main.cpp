#include <iostream>
#include <type_traits>


template <typename T>
void func(T&& t)
{}


int main()
{
    int a;
    int& ref_a = a;
    int& const_ref_a = a;
    int&& r_ref = 10;

    func(a);
    func(ref_a);
    func(const_ref_a);
    func(r_ref);
    return 0;
}

