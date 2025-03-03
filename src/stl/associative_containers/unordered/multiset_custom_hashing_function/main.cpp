#include <iostream>
#include <unordered_set>
#include <utility>



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

struct CustomHash
{
    std::size_t operator() (int k) const
    {
        return k % 5;
    }
};

int main()
{
    auto custom_hash = [](int i) { return i % 5; };
    std::unordered_multiset<int, CustomHash> uset { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    print_buckets(uset);


    return 0;
}
