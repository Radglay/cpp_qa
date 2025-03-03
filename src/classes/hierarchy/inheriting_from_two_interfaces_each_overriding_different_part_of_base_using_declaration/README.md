**result**:
 
main.cpp:6:13: error: cannot declare variable 'derived' to be of abstract type 'Derived'
    6 |     Derived derived;
      |             ^~~~~~~
In file included from /app/main.cpp:1:
/app/class.h:31:7: note:   because the following virtual functions are pure within 'Derived':
   31 | class Derived : public Part1, public Part2
      |       ^~~~~~~
/app/class.h:9:18: note:     'virtual void Base::virt_func1()'
    9 |     virtual void virt_func1() = 0;
      |                  ^~~~~~~~~~
/app/class.h:10:18: note:     'virtual void Base::virt_func2()'
   10 |     virtual void virt_func2() = 0;
 
**godbolt**: https://godbolt.org/z/5fvdd9sj7