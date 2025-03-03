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



void function(Resource res1)
{
    Resource res2;
}


int main()
{
    function(Resource());

    {
        Resource res;
    }

    std::cout << "Were destructors called?\n";

    return 0;
}
