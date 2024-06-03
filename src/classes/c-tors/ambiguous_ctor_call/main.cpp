#include "class.h"
#include <iostream>


int main()
{
   Person person1 { new char };
   Person person2 { new int };
   Person person3 ( nullptr );

   return 0;
};
