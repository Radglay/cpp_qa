**result**:
 
main.cpp:7:27: error: cannot convert 'void (*)()' to 'void (Base::*)()' in initialization
    7 |     void (Base::*ptr)() = &Base::func;
      |                           ^~~~~~~~~~~
      |                           |
      |                           void (*)()
 
**godbolt**: https://godbolt.org/z/Mvsafdbf9