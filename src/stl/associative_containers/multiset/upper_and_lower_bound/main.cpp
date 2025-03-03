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
    std::multiset<int> set1 { 1, 3, 1, 1, 1, 1, 4, 2, 5 };
    
    auto iters = set1.equal_range(1);

    auto it_lower = set1.lower_bound(1);
    auto it_upper = set1.upper_bound(1);

    std::cout << std::boolalpha;
    std::cout << "lower bound: " << *it_lower << ", upper bound: " << *it_upper << '\n';
    std::cout << (iters.first == it_lower) << ' ' << (iters.second == it_upper) << '\n';

    return 0;
}
