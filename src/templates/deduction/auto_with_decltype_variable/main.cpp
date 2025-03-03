#include <iostream>


int main()
{
    int a = 10;
    int& ref = a;

    auto a_ref1 = ref;
    std::cout << ++a_ref1 << ' ' << a << '\n';

    auto& a_ref2 = ref;
    std::cout << ++a_ref2 << ' ' << a << '\n';

    decltype(auto) a_ref3 = ref;
    std::cout << ++a_ref3 << ' ' << a << '\n';

    return 0;
}

