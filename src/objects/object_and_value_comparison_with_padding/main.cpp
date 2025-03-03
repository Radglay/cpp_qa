#include <iostream>


struct X
{
    int n;
    char c;

    bool operator==(const X& other)
    {
        return n == other.n and c == other.c;
    }
};

template <typename T>
bool objectComparison(T& lhs, T& rhs)
{
    unsigned char* ptr1 = reinterpret_cast<unsigned char*>(&lhs);
    unsigned char* ptr2 = reinterpret_cast<unsigned char*>(&rhs);

    int size = sizeof(T);
    for (int i = 0; i < size; ++i)
        if (*(ptr1 +i) != *(ptr2 + i))
            return false;
    return true;
}

int main()
{
    X x1 { 123, 'a' };
    X x2 { 123, 'a' };

    std::cout << std::boolalpha;
    std::cout << "Value comparison: " << (x1 == x2) << '\n';
    std::cout << "Object comparison: " << objectComparison(x1, x2) << '\n';

    return 0;
}
