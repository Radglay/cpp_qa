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
    std::map<int, std::string> map;
    map.insert(std::make_pair<int, std::string>(1, "test1"));
    map.insert(std::make_pair<int, std::string>(2, "test2"));
    map.insert({3, "test3"});
   
    std::cout << "map before:\n";
    std::cout << map << '\n';

    map[50] = "test50";

    std::cout << "\nmap after:\n";
    std::cout << map << '\n';

    return 0;
}
