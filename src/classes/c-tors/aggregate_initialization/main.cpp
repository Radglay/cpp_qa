#include "class.h"
#include <iostream>


int main()
{
   Person person { 10, "age" };
   std::cout << "age: " << person.age << '\n'
             << "name: " << person.name << '\n';
};
