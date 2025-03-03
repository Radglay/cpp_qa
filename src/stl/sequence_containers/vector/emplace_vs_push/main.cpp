#include <vector>
#include <iostream>
#include "class.h"
#include <string>


int main()
{
    std::vector<Resource> vec;
    vec.reserve(10);

    // (1p)
    std::cout << "(1p)\n";
    Resource res;
    vec.push_back(res);

    // (2p)
    std::cout << "(2p)\n";
    vec.push_back(Resource{});

    // (3p)
    std::cout << "(3p)\n";
    vec.push_back(std::move(res));

    // (4p)
    std::cout << "(4p)\n";
    vec.push_back();
   
    // (5p)
    std::cout << "(5p)\n";
    vec.push_back("test");

    // (1e)
    std::cout << "(1e)\n";
    Resource res2;
    vec.emplace_back(res2);

    // (2e)
    std::cout << "(2e)\n";
    vec.emplace_back(Resource{});

    // (3e)
    std::cout << "(3e)\n";
    vec.emplace_back(std::move(res));

    // (4e)
    std::cout << "(4e)\n";
    vec.emplace_back();

    // (5e)
    std::cout << "(5e)\n";
    vec.emplace_back("test");

    return 0;
}
