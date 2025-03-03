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

    std::cout << "after merge:\n";

    set1.merge(set2);
    std::cout << "set1: " << set1 << '\n';
    std::cout << "set2: " << set2 << '\n';



    return 0;
}
