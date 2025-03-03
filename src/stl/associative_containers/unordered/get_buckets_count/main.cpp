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

    std::cout << uset.bucket_count() << '\n';

    for (int i = 0; i < uset.bucket_count(); ++i)
        std::cout << "bucket_size [" << i << "] = " << uset.bucket_size(i) << '\n';

    return 0;
}
