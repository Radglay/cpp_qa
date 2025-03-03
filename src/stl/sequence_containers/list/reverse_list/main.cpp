#include <iostream>
#include <list>


int main()
{
    std::list<int> list1 { 1, 9, 5, 7, 3 };
    list1.sort();

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    list1.reverse();

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}
