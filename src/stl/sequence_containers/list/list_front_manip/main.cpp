#include <iostream>
#include <list>


int main()
{
    std::list<int> list { 1, 2, 3, 4, 5 };
    list.push_back(100);
    list.push_front(200);

    for (int e : list)
        std::cout << e << ' ';
    std::cout << '\n';

    list.pop_front();
    std::cout << list.front() << '\n';

    return 0;
}
