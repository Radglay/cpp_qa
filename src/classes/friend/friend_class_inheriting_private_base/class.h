#pragma once

#include <iostream>


class B;

class A
{
private:
    class Base {};
friend B;
};


class B : public A::Base
{};

