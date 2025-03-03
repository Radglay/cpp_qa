#include <iostream>
#include <map>
#include <string>
#include <utility>


template <typename Key, typename Value, typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::multimap<Key, Value, Comparator> map)
{
    for (auto& e : map)
        out << '{' << e.first << " : " << e.second << '}' << '\n';
    return out;
}



int main()
{
    std::multimap<int, std::string> map1 {
        { 1, "map1_1"},
        { 2, "map1_2"},
        { 3, "map1_3"},
        { 4, "map1_4"}
    };

    std::cout << map1[1] << ' ' << map1.at(1) << '\n';
    
    return 0;
}
