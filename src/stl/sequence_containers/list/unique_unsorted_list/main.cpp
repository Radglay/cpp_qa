#include <iostream>
#include <list>


int main()
{
    std::list<int> list1 { 1, 1, 2, 3, 2, 3, 3, 1, 1, 1 };

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    list1.unique();

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}
