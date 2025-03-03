#include <vector>
#include <iostream>
#include "class.h"
#include <string>


int main()
{
    std::vector<Resource> vec;
    vec.reserve(10);

    vec.emplace(vec.end(), "test");
    vec.emplace(vec.end());

    Resource res;
    vec.emplace(vec.end(), res);
    vec.emplace(vec.end(), Resource{});
    vec.emplace(vec.end(), std::move(res));

    return 0;
}
