#include <iostream>
#include <set>


template <typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::set<int, Comparator> set)
{
    for (auto e : set)
        out << e << ' ';

    return out;
}

// -std=c++20
int main()
{
    std::set<int> set1 { 1, 3, 4, 2, 5 };
 
    std::cout << "set1: " << set1 << '\n';

    std::cout << std::boolalpha;
    std::cout << "contains(1): " << set1.contains(1) << '\n';
    std::cout << "contains(99): " << set1.contains(99) << '\n';

    return 0;
}
