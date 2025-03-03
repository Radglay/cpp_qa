#include "function.h"
#include <vector>
#include <iostream>


int main()
{   
    std::vector<int> vec { 1, 2, 3, 4, 5 };
    std::cout << "accumulate of vec: " << accumulate(vec) << '\n';
    std::cout << "accumulate of vec: " << accumulate<int, std::vector>(vec) << '\n';

    return 0;
}
