#include "class.h"
#include <iostream>


int main()
{   
    int arr[] { 1, 2, 3, 4, 5 };
    SimpleContainer<int*> containerPointer { &arr[0],
                                             &arr[1],
                                             &arr[2],
                                             &arr[3],
                                             &arr[4]};
    
    std::cout << containerPointer.accumulate() << '\n';

    return 0;
}
