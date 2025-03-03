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

    auto it1 = set1.find(1);
    auto it99 = set1.find(99);

    std::cout << std::boolalpha;
    std::cout << "find(1): " << (it1 != set1.end()) << '\n';
    std::cout << "find(99): " << (it99 != set1.end()) << '\n';

    return 0;
}
