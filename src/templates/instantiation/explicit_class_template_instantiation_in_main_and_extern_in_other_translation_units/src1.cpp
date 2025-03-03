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

extern template class Base<int>;

void func1()
{
    Base<int> base;
    base.func();
}
