#include <iostream>
#include "class.h"
#include <vector>



int main()
{
    Derived1 dev1;

    // 1)
    std::vector<Base&> vec1;

    // 2)
    std::vector<Base&> vec2(10);

    // 3)
    std::vector<Base&> vec3;
    vec3.push_back(dev1);

    // 4)
    std::vector<Base&> vec4;
    vec4.reserve(10);


    return 0;
}

