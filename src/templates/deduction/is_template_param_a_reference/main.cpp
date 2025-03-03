#include <iostream>
#include <type_traits>


template <typename T>
void func(T& t)
{
    std::cout << "Is T a reference? " << std::is_reference_v<T> <<'\n';
}



int main()
{
    std::cout << std::boolalpha;

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

