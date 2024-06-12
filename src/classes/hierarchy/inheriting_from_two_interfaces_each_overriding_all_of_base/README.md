**result**:
```
main.cpp:7:13: error: request for member 'virt_func1' is ambiguous
    7 |     derived.virt_func1();
      |             ^~~~~~~~~~
In file included from /app/main.cpp:1:
/app/class.h:9:18: note: candidates are: 'virtual void Base::virt_func1()'
    9 |     virtual void virt_func1() = 0;
      |                  ^~~~~~~~~~
/app/class.h:30:10: note:                 'virtual void Part2::virt_func1()'
   30 |     void virt_func1() override
      |          ^~~~~~~~~~
/app/class.h:16:10: note:                 'virtual void Part1::virt_func1()'
   16 |     void virt_func1() override
      |          ^~~~~~~~~~
/app/main.cpp:8:13: error: request for member 'virt_func2' is ambiguous
    8 |     derived.virt_func2();
      |             ^~~~~~~~~~
/app/class.h:10:18: note: candidates are: 'virtual void Base::virt_func2()'
   10 |     virtual void virt_func2() = 0;
      |                  ^~~~~~~~~~
/app/class.h:35:10: note:                 'virtual void Part2::virt_func2()'
   35 |     void virt_func2() override
      |          ^~~~~~~~~~
/app/class.h:21:10: note:                 'virtual void Part1::virt_func2()'
   21 |     void virt_func2() override
```
**godbolt**: https://godbolt.org/z/qMG83arT3