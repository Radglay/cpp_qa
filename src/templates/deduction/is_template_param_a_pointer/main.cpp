#include <iostream>
#include <type_traits>


template <typename T>
void func(T* t)
{
    std::cout << std::boolalpha;
    std::cout << "Is T a pointer? " << std::is_pointer_v<T> << '\n';
}


int main()
{
    int a;
    int* ptr1 = &a;
    int* const ptr2 = &a;
    const int* const ptr3 = &a;

    func(&a);
    func(ptr1);
    func(ptr2);
    func(ptr3);

    return 0;
}

