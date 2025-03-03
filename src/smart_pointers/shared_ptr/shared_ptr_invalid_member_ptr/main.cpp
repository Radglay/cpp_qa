#include <iostream>
#include <memory>


class Data
{
public:
    int a;
    int b;

    Data(int p_a, int p_b) : a(p_a), b(p_b) {};
};

void deleter(Data* ptr)
{
    std::cout << "Deleter\n";
    delete ptr;
}

int main()
{
    std::shared_ptr<Data> data_ptr { new Data(10, 20), deleter };
    std::shared_ptr<int>a_ptr(data_ptr, &data_ptr->a);

    int* member_ptr = a_ptr.get();
    
    a_ptr.reset();
    data_ptr.reset();

    std::cout << *member_ptr << '\n';

    return 0;
}

