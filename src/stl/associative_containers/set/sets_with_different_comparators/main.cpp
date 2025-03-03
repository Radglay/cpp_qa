#include <iostream>
#include <set>
#include <functional>


template <typename Comparator>
void printSet(const std::set<int, Comparator> set)
{
    for (auto e : set)
        std::cout << e << ' ';
    std::cout << '\n';
}

int main()
{
    std::set<int> set1 { 1, 3, 4, 2, 5 };
    printSet(set1);

    std::set<int, std::greater<int>> set2 { 1, 3, 4, 2, 5 };
    printSet(set2);

    return 0;
}
