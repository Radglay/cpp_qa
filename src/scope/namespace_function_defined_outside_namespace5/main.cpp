#include <iostream>



namespace A
{
    
    int i = 10;

    namespace B
    {
        int func();
        // int i = 20;
    }
}

int i = 30;

int A::B::func()
{
    return i;
}

int main()
{
    std::cout << A::B::func() << '\n';

    return 0;
}
