#include <iostream>
#include <deque>


int main()
{
    std::deque<int> deq { 1, 3, 5, 6, 4, 2, 7, 9, 8, 10 };

    std::cout << "deq: ";
    for (int e : deq)
        std::cout << e << ' ';
    std::cout << '\n';


    return 0;
}
