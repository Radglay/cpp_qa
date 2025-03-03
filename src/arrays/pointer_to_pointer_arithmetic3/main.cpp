#include <iostream>


int main()
{
    int arr[4][2] {
        { 1, 2 },
        { 3, 4 },
        { 5, 6 },
        { 7, 8 }
    };
    
    std::cout << **arr << ' ' << *(*arr) + 1 << '\n';
    std::cout << **(arr + 1) << ' ' << *(*(arr + 1) + 1) << '\n';
    std::cout << **(arr + 2) << ' ' << *(*(arr + 2) + 1) << '\n';
    std::cout << **(arr + 3) << ' ' << *(*(arr + 3) + 1) << '\n';

    return 0;
}
