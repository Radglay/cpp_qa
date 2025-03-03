#include <iostream>


// -std=c++20
void func(auto t)
{
    std::cout << "auto template function\n";
}


int main()
{
    func(1);
    func('c');
    func("test");
    
    int a = 10;
    const int& ref = a;
    
    func(ref);

    return 0;
}

