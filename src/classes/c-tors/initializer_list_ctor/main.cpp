#include "class.h"
#include <initializer_list>

int main()
{
    Container<int> c1;
    // Container<int> c2 (); // function declaration...
    Container<int> c3 {};

    Container<int> c5 { 1 };
    Container<int> c6 { 1, 2 };

    Container<int> c7 (1);
    Container<int> c8 (1, 2);

    Container<int> c9 = { 1 };
    Container<int> c10 = { 1, 2 };

    Container<int> c11 = ( 1 );
    Container<int> c12 = ( 1, 2 );
    Container<int> c13 = ( 1, 2, 3, 4, 5, 6, 7 );
    Container<int> c14 = { 1, 2, 3, 4, 5, 6, 7 };
    Container<int> c15 (std::initializer_list<int>{1, 2, 3});

    return 0;
};
