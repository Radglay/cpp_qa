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


    double doubleArr[] {  1.0, 2.0, 3.0, 4.0, 5.0 };
    SimpleContainer<double*> containerPointerDouble { &doubleArr[0],
                                                      &doubleArr[1],
                                                      &doubleArr[2],
                                                      &doubleArr[3],
                                                      &doubleArr[4]};

    std::cout << containerPointerDouble.accumulate() << '\n';

    return 0;
}
