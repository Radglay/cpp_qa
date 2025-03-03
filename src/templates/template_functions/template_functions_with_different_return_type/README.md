**result**:
 
main.cpp:6:9: error: call of overloaded 'func(int, int)' is ambiguous
    6 |     func(1, 1);
      |     ~~~~^~~~~~
In file included from /app/main.cpp:1:
/app/function.h:7:6: note: candidate: 'void func(T, T) [with T = int]'
    7 | void func(T, T)
      |      ^~~~
/app/function.h:13:3: note: candidate: 'T func(T, T) [with T = int]'
   13 | T func(T, T)
 
**godbolt**: https://godbolt.org/z/Ybo6q7ME1