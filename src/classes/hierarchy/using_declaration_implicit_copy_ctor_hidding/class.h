#pragma once

#include <iostream>


class Base
{
public:
    Base() = default;
    Base(const Base&) = default;
};

class Derived : public Base
{
    using Base::Base;
};

class WithoutDefaultCopyCTor : public Base
{
public:
    WithoutDefaultCopyCTor(const WithoutDefaultCopyCTor&) {}
};

class DeletedDefaultCopyCtor : public Base
{
public:
    DeletedDefaultCopyCtor(const DeletedDefaultCopyCtor&) = delete;
};
