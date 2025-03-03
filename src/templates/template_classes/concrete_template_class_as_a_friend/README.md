**result**:
 
class.h: In instantiation of 'void A<T>::func(B*) [with T = double]':
/app/main.cpp:11:17:   required from here
   11 |     aDouble.func(&b);
      |     ~~~~~~~~~~~~^~~~
/app/class.h:30:20: error: 'void B::privateAFunc()' is private within this context
   30 |     b->privateAFunc();
 
**godbolt**: https://godbolt.org/z/7r1x4xsnK