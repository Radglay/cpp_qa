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
    std::multiset<int> set2 { 1, 3, 4, 2, 5 };

    std::cout << "set1: " << set1 << '\n';
    std::cout << "set2: " << set2 << '\n';

    auto it1_set1 = set1.find(1);
    auto it1_set2 = set2.find(1);

    set1.merge(set2);
    std::cout << "\nafter merge\n";

    std::cout << "set1: " << set1 << '\n';
    std::cout << "set2: " << set2 << '\n';

    
    std::cout << std::boolalpha;
    std::cout << "are iterators equal? " << (it1_set1 == it1_set2) << '\n';

    return 0;
}
