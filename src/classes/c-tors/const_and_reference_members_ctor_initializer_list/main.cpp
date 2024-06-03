#include "class.h"
#include <string>


int main()
{
    std::string address { "street" };
    int number { 100 };

    Person person { "Merry", 10, address, number };

    return 0;
};
