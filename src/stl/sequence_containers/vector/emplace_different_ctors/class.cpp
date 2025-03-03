#include "class.h"
#include <iostream>
#include <string>



Resource::Resource()
{
    std::cout << "Default C-tor\n";
}

Resource::Resource(std::string)
{
    std::cout << "One param C-tor\n";
}

Resource::Resource(const Resource&)
{
    std::cout << "Copy C-tor\n";
}

Resource::Resource(const Resource&&)
{
    std::cout << "Move C-tor\n";
}

Resource& Resource::operator= (const Resource& other)
{
    m_data = other.m_data;
    std::cout << "copy assignment\n";
    return *this;
}

Resource& Resource::operator= (Resource&& other)
{
    m_data = std::move(other.m_data);
    std::cout << "move assignment\n";
    return *this;
}
