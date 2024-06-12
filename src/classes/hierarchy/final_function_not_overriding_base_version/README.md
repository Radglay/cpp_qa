**result**:
```
/main.cpp:7:22: error: no matching function for call to 'Derived::virt_func()'
    7 |     derived.virt_func();
      |     ~~~~~~~~~~~~~~~~~^~
In file included from /app/main.cpp:1:
/app/class.h:18:10: note: candidate: 'void Derived::virt_func(int)'
   18 |     void virt_func(int)
      |          ^~~~~~~~~
```
**godbolt**: https://godbolt.org/z/bKaEE8M5j
