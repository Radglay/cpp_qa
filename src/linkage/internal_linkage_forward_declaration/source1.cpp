#include <iostream>


static int static_global = 100;

const int const_global = 200;
constexpr int constexpr_global = 300;

static const int static_const_global = 400;
static constexpr int static_constexpr_global = 500;


static void static_func()
{
    std::cout << "source1 version\n";
}
