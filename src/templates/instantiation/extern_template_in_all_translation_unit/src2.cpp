#include <iostream>


template <typename T>
class Base
{
public:
    void func()
    {
        std::cout << "src2 version\n";
    }
};

extern template class Base<int>;

void func2()
{
    Base<int> base;
    base.func();
}
