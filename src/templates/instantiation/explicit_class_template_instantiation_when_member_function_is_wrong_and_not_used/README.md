**result**:
 
class.h: In instantiation of 'void Base<T>::func() [with T = int]':
/app/main.cpp:4:16:   required from here
    4 | template class Base<int>;
      |                ^~~~~~~~~
/app/class.h:10:30: error: 'int' is not a class, struct, or union type
   10 |         typename T::iterator val {};
      |                              ^~~
 
**godbolt**: https://godbolt.org/z/W7oGWxYzx