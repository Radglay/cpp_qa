#include <iostream>
#include <deque>
#include <cstddef>
#include <new>



template <typename T>
struct CustomAllocator
{
    using value_type = int;
    using pointer = T*;

    CustomAllocator() = default;

    template <typename P> CustomAllocator(const CustomAllocator<P>&) {}

    T* allocate(std::size_t n)
    {
        n *= sizeof(T);
        std::cout << "allocating " << n << " bytes\n";
        return static_cast<T*>(::operator new(n));
    }

    void deallocate(T* p, std::size_t n)
    {
        std::cout << "deallocating " << n * sizeof *p << " bytes\n";
        ::operator delete(p);
    }
};


int main()
{
    std::deque<int, CustomAllocator<int>> deq { 1, 3, 5, 6, 4, 2, 7, 9, 8, 10 };

    std::cout << "deq: ";
    for (int e : deq)
        std::cout << e << ' ';
    std::cout << '\n';


    return 0;
}
