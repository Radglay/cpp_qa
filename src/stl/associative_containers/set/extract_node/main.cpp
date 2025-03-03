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
    std::cout << "set1: " << set1 << '\n';

    auto node = set1.extract(1);
    std::cout << "after extracting 1:\n";
    std::cout << "set1: " << set1 << '\n';

    std::cout << "node value: " << node.value() << '\n';
    node.value() = 99;
    set1.insert(std::move(node));
    std::cout << "after inserting node:\n";
    std::cout << "set1: " << set1 << '\n';


    return 0;
}
