#include "class.h"
#include <iostream>


Person func_or_object()
{
    std::cout << "function\n";
    return {};
}

int main()
{
   Person func_or_object{};
};
