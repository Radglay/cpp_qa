#include "class.h"
#include <iostream>


int main()
{
   Person person1 { 10, "test" };
   std::cout << "age: " << person1.age << '\n'
             << "name: " << person1.name << '\n';

    Person person2;
   std::cout << "age: " << person2.age << '\n'
             << "name: " << person2.name << '\n';
};
