#include <iostream>
#include <unordered_set>
#include <utility>


template <typename Key, typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::unordered_multiset<Key,Comparator> uset)
{
    for (auto& e : uset)
        out << e << ' ';
    return out;
}


int main()
{
    std::unordered_multiset<int> uset { 1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 6, 6, 7, 8, 9, 9 };

    std::cout << uset << '\n';
    std::cout << "bucket_count: " << uset.bucket_count() << '\n';
    std::cout << "load_factor: " << uset.load_factor() << '\n';

    uset.reserve(10);
    std::cout << "bucket_count: " << uset.bucket_count() << '\n';
    std::cout << "load_factor: " << uset.load_factor() << '\n';

    return 0;
}
