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
        { 1, "TEST1"},
        { 1, "TEST2"},
        { 1, "TEST3"},
        { 2, "map1_2"},
        { 3, "map1_3"},
        { 4, "map1_4"}
    };

    auto iter1_1 = map1.begin();

    auto iter1_2 = map1.begin();
    iter1_2++;

    auto iter1_3 = map1.begin();
    iter1_3++;
    iter1_3++;

    std::cout << '{' << iter1_1->first << ": " << iter1_1->second << '}' << '\n';
    std::cout << '{' << iter1_2->first << ": " << iter1_2->second << '}' << '\n';
    std::cout << '{' << iter1_3->first << ": " << iter1_3->second << '}' << '\n';


    auto iter_find = map1.find(1);
    std::cout << '{' << iter_find->first << ": " << iter_find->second << '}' << '\n';

    return 0;
}
