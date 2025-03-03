#include <iostream>
#include <set>
#include <functional>


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
    std::set<int> set2 { 1, 3, 6, 7, 8 };
    
    std::cout << "set1: " << set1 << '\n';
    std::cout << "set2: " << set2 << '\n';
    auto set1_common_it = set1.begin();
    auto set2_common_it = set2.begin();

    auto set1_it = ++set1_common_it;
    auto set2_it = ++set2_common_it;

    std::cout << std::boolalpha;
    std::cout << "are common iterators equal? " << (set1_common_it == set2_common_it) << '\n';
    std::cout << "are unique iterators equal? " << (set1_it == set2_it) << '\n';

    std::cout << "\nafter merge:\n";

    set1.merge(set2);
    std::cout << "set1: " << set1 << '\n';
    std::cout << "set2: " << set2 << '\n';
    std::cout << "are common iterators equal? " << (set1_common_it == set2_common_it) << '\n';
    std::cout << "are unique iterators equal? " << (set1_it == set2_it) << '\n';

    return 0;
}
