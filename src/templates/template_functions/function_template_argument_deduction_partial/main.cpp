#include "function.h"


int main()
{
    func(1, 1);
    func(1, 2.0);
    func<int>(1, 1);
    func<int, double>(1, 1);

    return 0;
}
