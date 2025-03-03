**result**:
 
main.cpp:7:13: error: request for member 'virt_func' is ambiguous
    7 |     diamond.virt_func();
      |             ^~~~~~~~~
In file included from /app/main.cpp:1:
/app/class.h:11:18: note: candidates are: 'virtual void Base::virt_func()'
   11 |     virtual void virt_func()
      |                  ^~~~~~~~~
/app/class.h:27:10: note:                 'virtual void Derived2::virt_func()'
   27 |     void virt_func()
      |          ^~~~~~~~~
/app/class.h:19:10: note:                 'virtual void Derived1::virt_func()'
   19 |     void virt_func()
      |          ^~~~~~~~~
 
**godbolt**: https://godbolt.org/z/sYqW5zrco
