#include <iostream>
#include <list>
#include <functional>


int main()
{
    std::list<int> list1 { 1, 9, 5, 7, 3 };
    std::list<int> list2 { 2, 6, 4, 8, 10 };
    list1.sort();
    list2.sort();

    auto elem_list1 = list1.begin();
    elem_list1++;
    auto elem_list2 = list2.begin();
    elem_list2++;

    std::cout << "elem_list1: " << *elem_list1 << '\n';
    std::cout << "elem_list2: " << *elem_list2 << '\n';

    list1.merge(list2);

    std::cout << "elem_list1: " << *elem_list1 << '\n';
    std::cout << "elem_list2: " << *elem_list2 << '\n';

    return 0;
}
