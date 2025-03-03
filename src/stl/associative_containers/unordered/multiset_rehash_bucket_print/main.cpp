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

template <typename Key, typename Comparator>
void print_buckets(const std::unordered_multiset<Key,Comparator> uset)
{
    for (int i = 0; i < uset.bucket_count(); ++i)
    {
        auto temp = uset.begin(i);
        auto end = uset.end(i);

        std::cout << "bucket [" << i << "]: ";
        for (; temp != end; ++temp)
            std::cout << *temp << ' ';
        std::cout << '\n';
    }
}

int main()
{
    std::unordered_multiset<int> uset { 1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 6, 6, 7, 8, 9, 9 };

    std::cout << uset << '\n';
    print_buckets(uset);

    std::cout << "bucket_count: " << uset.bucket_count() << '\n';
    std::cout << "load_factor: " << uset.load_factor() << '\n';

    uset.rehash(10);

    std::cout << "bucket_count: " << uset.bucket_count() << '\n';
    std::cout << "load_factor: " << uset.load_factor() << '\n';
    print_buckets(uset);

    return 0;
}
