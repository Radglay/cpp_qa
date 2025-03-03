#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <chrono>
#include <functional>
#include <iomanip>


template <typename Key, typename Value, typename Comparator>
std::ostream& operator<< (std::ostream& out, const std::multimap<Key, Value, Comparator> map)
{
    for (auto& e : map)
        out << '{' << e.first << " : " << e.second << '}' << '\n';
    return out;
}


void emplace(std::multimap<int, std::string>& map)
{
    map.emplace(1999, "new_element");
}

void emplace_hint(std::multimap<int, std::string>& map)
{
    map.emplace_hint(map.end(), 1999, "new_element");
}

void emplace_hint_pessimistic(std::multimap<int, std::string>& map)
{
    map.emplace_hint(map.begin(), 1999, "new_element");
}


void time_operation(std::function<void(std::multimap<int, std::string>&)> func)
{
    std::vector<std::pair<int, std::string>> vec(10000);
    
    for (int i = 0; i < 10000; ++i)
    {
        vec[i].first = i % 2000;
        vec[i].second = "test" + std::to_string(i);
    }
    std::multimap<int, std::string> map(vec.begin(), vec.end());


    const auto start = std::chrono::system_clock::now();
    
    func(map);

    const auto stop = std::chrono::system_clock::now();
    std::chrono::duration<double, std::milli> time = stop - start;

    std::cout << std::setw(8);
    std::cout << time.count() << '\n';
}



int main()
{
    std::cout << "emplace:\n";
    time_operation(emplace);

    std::cout << "emplace_hint:\n";
    time_operation(emplace_hint);

    std::cout << "emplace_hint pessimistic:\n";
    time_operation(emplace_hint_pessimistic);

    return 0;
}
