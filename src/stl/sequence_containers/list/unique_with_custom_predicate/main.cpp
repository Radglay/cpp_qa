#include <iostream>
#include <list>


bool pred(const int& a, const int& b)
{
    return (a % 2 == 1) and (b % 2 == 1);
}

int main()
{
    std::list<int> list1 { 1, 1, 2, 3, 2, 2, 3, 3, 1, 1, 1 };

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    list1.unique(pred);

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}
