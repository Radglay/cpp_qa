**result**:
```
main.cpp:6:13: error: class template argument deduction failed:
    6 |     Derived derived;
      |             ^~~~~~~
/app/main.cpp:6:13: error: no matching function for call to 'Derived()'
In file included from /app/main.cpp:1:
/app/class.h:10:7: note: candidate: 'template<class T> Derived()-> Derived<T>'
   10 | class Derived : public Base<T>
```
**godbolt**: https://godbolt.org/z/4z77bjhsq