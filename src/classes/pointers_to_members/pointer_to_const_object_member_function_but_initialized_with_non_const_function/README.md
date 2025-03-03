**result**:
 
main.cpp:8:33: error: cannot convert 'void (Base::*)()' to 'void (Base::*)() const' in initialization
    8 |     void (Base::*ptr)() const = &Base::func;
 
**godbolt**: https://godbolt.org/z/3PY3Koe1z