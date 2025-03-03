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
 
    auto iters = set1.equal_range(1);

    
    auto lower_bound = set1.lower_bound(1);
    auto upper_bound = set1.upper_bound(1);

    std::cout << std::boolalpha;
    std::cout << *lower_bound << ' ' << (lower_bound == iters.first) << '\n';
    std::cout << *upper_bound << ' ' << (upper_bound == iters.second) << '\n';

    return 0;
}
