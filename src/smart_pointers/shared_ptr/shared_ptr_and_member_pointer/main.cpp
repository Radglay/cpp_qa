#include <iostream>
#include <memory>


class Data
{
public:
    int a;
    int b;

    Data(int p_a, int p_b) : a(p_a), b(p_b) {};
};

int main()
{
    std::shared_ptr<Data> data_ptr { new Data(10, 20) };
    std::shared_ptr<int>a_ptr(data_ptr, &data_ptr->a);
    std::shared_ptr<int>b_ptr(data_ptr, &data_ptr->b);

    std::cout << "Data: " << data_ptr->a << ' ' << data_ptr->b << '\n';
    std::cout << "a_ptr: " << *a_ptr << '\n';
    std::cout << "b_ptr: " << *b_ptr << '\n';

    return 0;
}

