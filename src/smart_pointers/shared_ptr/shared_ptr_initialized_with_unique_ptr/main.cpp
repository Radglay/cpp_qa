#include <iostream>
#include <memory>
#include <iostream>


int main()
{
    auto u_ptr = std::unique_ptr<int>(new int{10});

    std::shared_ptr<int> s_ptr = std::move(u_ptr);

    if (u_ptr == nullptr)
        std::cout << "unique_ptr is empty\n";
    std::cout << std::boolalpha << "is shared_ptr unique? " << s_ptr.unique() << '\n';

    return 0;
}

