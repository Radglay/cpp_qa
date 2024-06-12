#include "class.h"
#include <string>
#include <complex>


int main()
{
    Base<double> baseDouble;
    auto baseT1 = static_cast<Base<int>>(baseDouble);
    auto baseT2 = static_cast<Base<std::string>>(baseDouble);
    auto baseT3 = static_cast<Base<std::complex<double>>>(baseDouble);
    
    baseT1.print();
    baseT2.print();
    baseT3.print();

    return 0;
}
