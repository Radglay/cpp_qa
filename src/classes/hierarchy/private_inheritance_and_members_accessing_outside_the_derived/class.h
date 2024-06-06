#pragma once


class Base
{
private:
    int private_x { 111 };
protected:
    int protected_x { 222 };
public:
    int public_x { 333 };
};

class Derived : private Base
{};
