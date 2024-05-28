#include "class.h"
#include <iostream>


int main()
{
    Person person1(10, "Andry");
    std::cout << "age: " << person1.age << ", name: " << person1.name << '\n';
    Person person2(0, "Andry");
    std::cout << "age: " << person2.age << ", name: " << person2.name << '\n';
};
