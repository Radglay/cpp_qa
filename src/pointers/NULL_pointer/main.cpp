#include <iostream>



void function(long a)
{
    std::cout << "long version: " << a << '\n';
}

void function(int* a)
{
    std::cout << "int* version: " << a << '\n';
}


int main()
{
    int* ptr = NULL;
    function(ptr);

    function(NULL);

    function(nullptr);

    return 0;
}
