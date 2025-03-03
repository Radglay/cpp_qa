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
    std::set<int> set { 1, 3, 4, 2, 5 };
    printSet(set);

    set.insert(6);
    set.insert(-1);
    printSet(set);

    set.insert({-2, -2, -2, -3});
    printSet(set);

    return 0;
}
