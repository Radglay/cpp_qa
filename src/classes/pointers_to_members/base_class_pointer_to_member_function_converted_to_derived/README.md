**result**:
 
main.cpp:7:27: error: cannot convert 'void (Derived::*)()' to 'void (Base::*)()' in initialization
    7 |     void (Base::*ptr)() = &Derived::func;
 
**godbolt**: https://godbolt.org/z/b4Yasbc3d