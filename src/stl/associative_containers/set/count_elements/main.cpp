#include <iostream>
#include <set>


template <typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::set<int, Comparator> set)
{
    for (auto e : set)
        out << e << ' ';

    return out;
}

int main()
{
    std::set<int> set1 { 1, 3, 4, 2, 5 };
    std::cout << "set1: " << set1 << '\n';

    std::cout << "count(1): " << set1.count(1) << '\n';
    std::cout << "count(99): " << set1.count(99) << '\n';

    return 0;
}
