#include <iostream>


template <typename T>
class Base
{
public:
    void func()
    {
        std::cout << "main version\n";
    }
};

template class Base<int>;

void func1();
void func2();

int main()
{
    func1();
    func2();

    return 0;
}
