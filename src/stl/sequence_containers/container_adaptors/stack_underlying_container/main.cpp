#include <iostream>
#include <stack>
#include <vector>


int main()
{
    std::stack<int, std::vector<int>> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.pop();

    std::cout << stack.top() << '\n';

    return 0;
}
