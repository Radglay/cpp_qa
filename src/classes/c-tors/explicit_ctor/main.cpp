#include "class.h"
#include <iostream>


void print(const Person& person)
{
    std::cout << "age: " << person.age << ", name: " << person.name << '\n';
}

void printExplicit(const ExcplicitPerson& person)
{
    std::cout << "age: " << person.age << ", name: " << person.name << '\n';
}


int main()
{
    Person person1(10, "Andry");
    print(person1);

    Person person2 = {20, "Melly"};
    print(person2);

    print({30, "Josh"});
    print(40);
    print({50});
    print(Person{60});

    std::cout << '\n';

    ExcplicitPerson explicitPerson1 {10, "Andry"};
    printExplicit(explicitPerson1);

    ExcplicitPerson explicitPerson1 = {20, "Melly"};
    printExplicit(explicitPerson1);

    printExplicit({30, "Josh"});
    printExplicit(40);
    printExplicit({50});
    printExplicit(ExcplicitPerson{60});
};
