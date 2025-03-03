#include <iostream>
#include <list>


int main()
{
    std::list<int> list1 { 1, 9, 5, 7, 3 };
    std::list<int> list2 { 2, 6, 4, 8, 10 };
    list1.sort();
    list2.sort();
    
    auto start = list2.begin();
    ++start;
    auto end = list2.end();
    --end;

    list1.splice(list1.begin(), list2, start, end);

    std::cout << "list1: ";
    for (int e : list1)
        std::cout << e << ' ';
    std::cout << '\n';

    std::cout << "list2: ";
    for (int e : list2)
        std::cout << e << ' ';
    std::cout << '\n';

    return 0;
}
