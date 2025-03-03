#include <string>


class Resource
{
public:
    Resource();
    Resource(std::string);

    Resource(const Resource&);
    Resource(const Resource&&);

    Resource& operator= (const Resource&);
    Resource& operator= (Resource&&);

private:
    std::string m_data;
};
