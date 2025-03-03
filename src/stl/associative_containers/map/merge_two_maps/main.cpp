#include <iostream>
#include <map>
#include <string>
#include <utility>


template <typename Key, typename Value, typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::map<Key, Value, Comparator> map)
{
    for (auto& e : map)
        out << '{' << e.first << " : " << e.second << '}' << '\n';
    return out;
}



int main()
{
    std::map<int, std::string> map1 {
        { 1, "map1_1"},
        { 2, "map1_2"},
        { 3, "map1_3"},
        { 4, "map1_4"}
    };

    std::map<int, std::string> map2 {
        { 1, "map2_1" },
        { 2, "map2_2" },
        { 5, "map2_5" },
    };


    std::cout << "map1:\n";
    std::cout << map1 << '\n';
    std::cout << "map2:\n";
    std::cout << map2 << '\n';

    map1.merge(map2);
    std::cout << "after merge: \n";
    std::cout << "map1:\n";
    std::cout << map1 << '\n';
    std::cout << "map2:\n";
    std::cout << map2 << '\n';

    return 0;
}
