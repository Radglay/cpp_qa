**result**:
 
main.cpp:8:27: error: cannot convert 'void (Base::*)() const' to 'void (Base::*)()' in initialization
    8 |     void (Base::*ptr)() = &Base::func;
 
**godbolt**: https://godbolt.org/z/51r11nKc6