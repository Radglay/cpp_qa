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


    auto iters = map1.equal_range(1);
    auto it_lower = map1.lower_bound(1);
    auto it_upper = map1.upper_bound(1);
    
    std::cout << std::boolalpha;
    std::cout << "lower: " << it_lower->first << ", upper: " << it_upper->first << '\n';
    std::cout << (it_lower == iters.first) << ' ' << (it_upper == iters.second) << '\n';

    return 0;
}
