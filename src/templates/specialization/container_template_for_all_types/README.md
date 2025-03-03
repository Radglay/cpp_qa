**result**:
 
class.h: In instantiation of 'T SimpleContainer<T>::accumulate() [with T = int*]':
/app/main.cpp:18:45:   required from here
   18 |     std::cout << containerPointer.accumulate() << '\n';
      |                  ~~~~~~~~~~~~~~~~~~~~~~~~~~~^~
/app/class.h:25:17: error: invalid operands of types 'int*' and 'int*' to binary 'operator+'
   25 |             sum += vals[i];
      |             ~~~~^~~~~~~~
 
**godbolt**: https://godbolt.org/z/9a8GaafWY