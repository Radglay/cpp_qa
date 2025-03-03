#include <iostream>
#include <set>


template <typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::multiset<int, Comparator> set)
{
    for (auto e : set)
        out << e << ' ';

    return out;
}

int main()
{
    std::multiset<int> set1 { 1, 3, 4, 2, 5 };
    set1.insert(3);
    set1.insert(3);
    set1.insert(3);

    std::cout << "set1: " << set1 << '\n';

    return 0;
}
