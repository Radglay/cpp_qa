#include "function.h"
#include <iostream>


void otherFunc()
{
    std::cout << "other Func\n";
}

int main()
{
    func<int>();
    return 0;
}
