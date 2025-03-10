#include <iostream>
#include <queue>
#include <vector>


int main()
{
    std::queue<int, std::vector<int>> q;
    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "front: " << q.front() << '\n';
    std::cout << "back: " << q.back() << '\n';

    q.pop();
    std::cout << "front: " << q.front() << '\n';
    std::cout << "back: " << q.back() << '\n';

    return 0;
}
