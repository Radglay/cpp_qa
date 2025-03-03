#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list { 1, 2, 3, 4 ,5 };

    auto p = list.begin();
    ++p;
    ++p;

    list.erase_after(p);

    for (auto e : list)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}
