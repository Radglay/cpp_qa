#include <iostream>
#include <set>


template <typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::multiset<int, Comparator> set)
{
    for (auto e : set)
        out << e << ' ';

    return out;
}

template <typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::set<int, Comparator> set)
{
    for (auto e : set)
        out << e << ' ';

    return out;
}


int main()
{
    std::multiset<int> set1 { 1, 3, 1, 1, 1, 1, 4, 2, 5 };
    std::set<int> set2 { 1, 3, 5, 7 };

    set1.merge(set2);
    std::cout << "set1: " << set1 << '\n';
    std::cout << "set2: " << set2 << '\n';

    return 0;
}
