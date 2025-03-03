#include "template.h"


extern template void template_function<int>();

int main()
{
    template_function<int>();
    return 0;
}