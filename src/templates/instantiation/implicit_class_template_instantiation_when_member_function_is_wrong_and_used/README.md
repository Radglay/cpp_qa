**result**:
 
class.h: In instantiation of 'void Base<T>::func() [with T = int]':
/app/main.cpp:7:14:   required from here
    7 |     base.func();
      |     ~~~~~~~~~^~
/app/class.h:10:30: error: 'int' is not a class, struct, or union type
   10 |         typename T::iterator val {};
      |                              ^~~
 
**godbolt**: https://godbolt.org/z/n4c1dxfhT