#include <iostream>



namespace A
{
    
    int func();
    int i = 10;

    namespace B
    {
        int i = 20;
    }
}

int i = 30;

int A::func()
{
    return i;
}

int main()
{
    std::cout << A::func() << '\n';

    return 0;
}
