#include <iostream>


struct S
{
    char c1;
    char c2;

    bool operator==(const S& other)
    {
        return c1 == other.c1 and c2 == other.c2;
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
    S s1 { 'a', 'b' };
    S s2 { 'a', 'b' };

    std::cout << std::boolalpha;
    std::cout << "Value comparison: " << (s1 == s2) << '\n';
    std::cout << "Object comparison: " << objectComparison(s1, s2) << '\n';

    return 0;
}
