#include <iostream>


template <typename T>
class Base
{
public:
    void func()
    {
        std::cout << "src1 version\n";
    }
};

void func1()
{
    Base<int> base;
    base.func();
}
