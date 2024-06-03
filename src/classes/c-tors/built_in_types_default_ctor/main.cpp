#include "class.h"


Person person3;

int main()
{
    Person person1;
    person1.print();

    std::cout << '\n';

    Person person2 {};
    person2.print();

    std::cout << '\n';

    person3.print();

    std::cout << '\n';
   
    static Person person4;
    person4.print();

    return 0;
};
