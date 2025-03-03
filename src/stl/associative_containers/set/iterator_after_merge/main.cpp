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
    std::set<int> set2 { 6 };
 
    std::cout << "set1: " << set1 << '\n';
    auto it6_set2 = set2.find(6);

    set1.merge(set2);
    std::cout << "set1: " << set1 << '\n';

    auto it6_set1 = set1.find(6);
    std::cout << std::boolalpha;
    std::cout << "are iterators equal? " << (it6_set2 == it6_set1) << '\n';

    return 0;
}
