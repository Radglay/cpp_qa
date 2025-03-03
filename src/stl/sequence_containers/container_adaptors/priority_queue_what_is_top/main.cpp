#include <iostream>
#include <queue>


int main()
{
    std::priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);

    std::cout << "top: " << q.top() << '\n';

    q.pop();

    std::cout << "top: " << q.top() << '\n';

    return 0;
}
