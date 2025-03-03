#include <iostream>


int main()
{
    int arr[4][2] {
        { 1, 2 },
        { 3, 4 },
        { 5, 6 },
        { 7, 8 }
    };
    
    std::cout << **arr << ' ' << **(arr + 1) << ' ' << **(arr + 2) << ' ' << **(arr + 3) << '\n';

    return 0;
}
