#include <iostream>
#include <queue>
#include <vector>
#include <functional>


template <typename T>
void print_q(T q)
{
    while (!q.empty())
    {
        std::cout << q.top() << ' ';
        q.pop();
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> underlying_container { 1, 3, 6, 9, 8, 7, 4, 5, 2 };
    std::priority_queue<int> q (std::less<int>{}, underlying_container);
  
    print_q(q);

    std::priority_queue<int, std::vector<int>, std::greater<int>> q2 (std::greater<int>{}, underlying_container);
    print_q(q2);

    return 0;
}
