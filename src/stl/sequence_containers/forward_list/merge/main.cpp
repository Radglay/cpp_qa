#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list1 { 1, 2, 3, 4 ,5 };
    std::forward_list<int> list2 { 10, 20, 30 };

    list1.merge(list2);

    for (auto e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}
