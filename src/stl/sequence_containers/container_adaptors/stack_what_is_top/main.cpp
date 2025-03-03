#include <iostream>
#include <stack>


int main()
{
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.pop();

    std::cout << stack.top() << '\n';

    return 0;
}
