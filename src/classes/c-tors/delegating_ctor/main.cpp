#include "class.h"


int main()
{
    Person person1(10);
    person1.print();

    std::cout << '\n';

    Person person2("name");
    person2.print();

    return 0;
};
