#include "function.h"
#include <vector>


int main()
{   
    int arr[] { 1, 2, 3, 4, 5 };
    func(arr);

    std::vector<int> vec { 1, 2, 3, 4, 5 };
    func(vec);

    return 0;
}
