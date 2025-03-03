#include <iostream>
#include <unordered_set>
#include <utility>


template <typename Key, typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::unordered_set<Key,Comparator> uset)
{
    for (auto& e : uset)
        out << e << ' ';
    return out;
}


int main()
{
    std::unordered_set<int> uset;
    uset.insert(1);
    uset.insert(2);
    uset.insert(3);
    uset.insert(1);

    auto begin1 = uset.begin(1);
    auto begin2 = uset.begin(2);

    std::cout << *begin1 << ' ' << *begin2 << '\n';

    return 0;
}
