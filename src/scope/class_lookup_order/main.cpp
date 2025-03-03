#include <iostream>



namespace A
{
    
   struct Base
   {
        static int i;         
   };

   int Base::i = 20;
   int i =40;
}

namespace B
{
    struct Derived : public A::Base
    {
        static int i;

        int func();
    };
    int Derived::i = 10;

    int i = 30;
}

int i = 50;

int B::Derived::func()
{
    return i;
}

int main()
{
    std::cout << B::Derived().func() << '\n';

    return 0;
}
