#include <iostream>


class Resource
{
public:
    Resource()
    {
        std::cout << "Constructor\n";
    }

    ~Resource()
    {
        std::cout << "Destructor\n";
    }
};



int main()
{
    Resource* res_ptr = new Resource[5];
    std::cout << "Were destructors called?\n";

    return 0;
}
