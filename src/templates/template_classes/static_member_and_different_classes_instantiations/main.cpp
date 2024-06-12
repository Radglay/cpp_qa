#include "class.h"


int main()
{
    Base<int> base1;
    Base<int> base2;
    Base<int> base3;

    Base<double> baseDouble1;
    Base<double> baseDouble2;

    Base<int>::print();
    Base<double>::print();
    Base<char>::print();

    return 0;
}
