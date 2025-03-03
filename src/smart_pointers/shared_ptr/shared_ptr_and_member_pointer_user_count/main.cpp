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

    std::cout << "data use_count: " << data_ptr.use_count() << '\n';
    std::cout << "a_ptr use-count: "<< a_ptr.use_count() << '\n';
    std::cout << "b_ptr use-count: "<< b_ptr.use_count() << '\n';

    std::cout << '\n';
    auto a_ptr2 = a_ptr;
    auto b_ptr2 = b_ptr;

    std::cout << "data use_count: " << data_ptr.use_count() << '\n';
    std::cout << "a_ptr use-count: "<< a_ptr.use_count() << '\n';
    std::cout << "b_ptr use-count: "<< b_ptr.use_count() << '\n';

    return 0;
}

