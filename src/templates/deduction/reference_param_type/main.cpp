#include <iostream>


template <typename T>
void func(T& t)
{
    std::cout << "T&\n";
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

