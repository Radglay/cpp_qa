#include "function.h"
#include <complex>


int main()
{
    func(1, 1);
    func(1.0, 1.0);
    func(std::complex<double>{}, std::complex<double>{});

    return 0;
}
