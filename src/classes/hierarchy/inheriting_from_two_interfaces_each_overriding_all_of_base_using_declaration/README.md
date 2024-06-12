**result**:
```
main.cpp:7:23: error: 'virtual void Part1::virt_func1()' is inaccessible within this context
    7 |     derived.virt_func1();
      |     ~~~~~~~~~~~~~~~~~~^~
In file included from /app/main.cpp:1:
/app/class.h:16:10: note: declared here
   16 |     void virt_func1() override
      |          ^~~~~~~~~~
/app/main.cpp:8:23: error: 'virtual void Part2::virt_func2()' is inaccessible within this context
    8 |     derived.virt_func2();
      |     ~~~~~~~~~~~~~~~~~~^~
/app/class.h:35:10: note: declared here
   35 |     void virt_func2() override
```
**godbolt**: https://godbolt.org/z/4WdsEK9d6