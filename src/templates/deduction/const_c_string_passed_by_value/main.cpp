#include <iostream>


template <typename T>
void func(T t)
{
    t = nullptr;
}

int main()
{
    const char* const word = "Test";
    func(word);

    if (!word)
        std::cout << "Word is nullptr\n";

    return 0;
}

