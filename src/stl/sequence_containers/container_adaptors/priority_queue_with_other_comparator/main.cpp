#include <iostream>
#include <queue>
#include <utility>


int main()
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);

    std::cout << "top: " << q.top() << '\n';


    return 0;
}
