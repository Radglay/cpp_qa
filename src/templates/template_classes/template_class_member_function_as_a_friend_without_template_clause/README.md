**result**:
```
function.h:18:13: error: 'template<class T> class A' used without template arguments
   18 | friend void A::func(B*);
      |             ^
function.h: In instantiation of 'void A<T>::func(B*) [with T = int]':
/app/main.cpp:8:11:   required from here
    8 |     a.func(&b);
      |     ~~~~~~^~~~
/app/function.h:30:20: error: 'void B::privateAFunc()' is private within this context
   30 |     b->privateAFunc();
```
**godbolt**: https://godbolt.org/z/veqso3nav