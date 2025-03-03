#include <iostream>
#include <memory>



int main()
{
    int* array = new int[5]{ 1, 2, 3, 4, 5 };

    auto ptr = std::unique_ptr<int[]>(array);

    std::cout << ptr[0] << ' ' << ptr[1] << '\n';


    return 0;
}

