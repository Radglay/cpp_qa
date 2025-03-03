#include <iostream>


struct S
{
    char c1;
    char c2;
};

struct X
{
    int n;
    char c;
};

int main()
{
    std::cout << "size of struct: " << sizeof(S) << ", size of elements: " << 2 * sizeof(char) << '\n';
    std::cout << "alignemnt of char: " << alignof(char) << '\n';
    std::cout << "alignemnt of struct: " << alignof(S) << '\n';

    std::cout << '\n';
    std::cout << "size of struct: " << sizeof(X) << ", size of elements: " << sizeof(int) + sizeof(char) << '\n';
    std::cout << "alignemnt of int: " << alignof(int) << ", alignemnt of char: " << alignof(char) << '\n';
    std::cout << "alignemnt of struct: " << alignof(X) << '\n';

    X x;
    x.n = 999;
    x.c = 45;

    unsigned char* ptr = reinterpret_cast<unsigned char*>(&x);

    std::cout << "object representation\n";
    for (int i = 0; i < sizeof(X); ++i)
        std::cout << "addr: " << static_cast<void*>(ptr + i) << ", value: " << static_cast<int>(*(ptr + i)) << '\n';
    
    std::cout << "value representation\n";
    std::cout << "addr: " << static_cast<void*>(&x.n) << ", value: " << x.n << '\n';
    std::cout << "addr: " << static_cast<void*>(&x.c) << ", value: " << static_cast<int>(x.c) << '\n';


    return 0;
}
