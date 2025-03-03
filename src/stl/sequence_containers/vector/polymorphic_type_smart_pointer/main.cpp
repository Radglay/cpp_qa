#include <iostream>
#include "class.h"
#include <vector>
#include <memory>


int main()
{
    Derived1 dev1;


    // 1)
    std::vector<std::shared_ptr<Base>> vec1;

    // 2)
    std::vector<std::shared_ptr<Base>> vec2(10);

    // 3)
    std::vector<std::shared_ptr<Base>> vec3;
    vec3.push_back(std::make_shared<Derived1>(dev1));

    // 4)
    std::vector<std::shared_ptr<Base>> vec4;
    vec4.push_back(std::make_shared<Base>(dev1));

    // 5)
    std::vector<std::shared_ptr<Base>> vec5;
    vec5.reserve(10);


    return 0;
}

