#pragma once

#include <iostream>


class Outer
{
public:
    void outer_func();
    void common_func();
    static void common_static_func();

    class
    {
    public:
        void inner_func()
        {
            std::cout << "inner_func()\n";
        }

        void common_func()
        {
            std::cout << "inner common_func()\n";
        }

        void common_static_func()
        {
            std::cout << "inner common_static_func()\n";
        }
    };
};