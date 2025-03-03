#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <deque>
#include <forward_list>
#include <new>
#include <cstddef>



int allocated_memory = 0;


template <typename T>
struct CustomAllocator
{
    using value_type = T;
    using pointer = T*;
    using const_pointer = const T*;
    using reference = T&;
    using const_reference = const T&;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;


    CustomAllocator() = default;

    template <typename U>
    CustomAllocator(const U&) {}

    T* allocate(std::size_t n)
    {
        n *= sizeof(T);
        allocated_memory += n;
        return static_cast<T*>(::operator new(n));
    }

    void deallocate(T* ptr, std::size_t n)
    {
        allocated_memory = 0;
        ::operator delete(ptr);
    }
};


template <typename T, std::size_t N>
void print_sizeof_n_elements()
{
    std::cout << "N = " << N << ", sizeof(T) = " << sizeof(T) << '\n';
    
    {
        std::list<T, CustomAllocator<T>> list(N);
        std::cout << "list: " << sizeof(list)
                  << ", allocated memory: " << allocated_memory << '\n';
    }

    {
        std::forward_list<T, CustomAllocator<T>> f_list(N);
        std::cout << "forward_list: " << sizeof(f_list)
                  << ", allocated memory: " << allocated_memory << '\n';
    }

    {
        std::vector<T, CustomAllocator<T>> vec(N);
        std::cout << "vector: " << sizeof(vec)
                  << ", allocated memory: " << allocated_memory << '\n';
    }
    
    {
        std::deque<T, CustomAllocator<T>> deq(N);
        std::cout << "deque: " << sizeof(deq)
                << ", allocated memory: " << allocated_memory << '\n';
    }
    {
        std::array<T, N> arr;
        std::cout << "array: " << sizeof(arr)
                << ", allocated memory: " << allocated_memory << '\n';
    }
}


int main()
{
    print_sizeof_n_elements<int, 1>();
    std::cout << '\n';

    print_sizeof_n_elements<int, 100>();
    std::cout << '\n';

    print_sizeof_n_elements<int, 1'000>();
    std::cout << '\n';

    print_sizeof_n_elements<int, 10'000>();
    std::cout << '\n';


    return 0;
}
