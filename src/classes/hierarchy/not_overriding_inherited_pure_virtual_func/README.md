**result**:
```
main.cpp:6:13: error: cannot declare variable 'derived' to be of abstract type 'Derived'
    6 |     Derived derived;
      |             ^~~~~~~
In file included from /app/main.cpp:1:
/app/class.h:12:7: note:   because the following virtual functions are pure within 'Derived':
   12 | class Derived : public Base
      |       ^~~~~~~
/app/class.h:9:18: note:     'virtual void Base::virt_func()'
    9 |     virtual void virt_func() = 0;
```
**godbolt**: https://godbolt.org/z/Gszs6TszP