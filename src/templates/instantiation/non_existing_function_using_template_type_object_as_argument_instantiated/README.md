**result**:
 
function.h: In instantiation of 'void func() [with T = int]':
/app/main.cpp:6:14:   required from here
    6 |     func<int>();
      |     ~~~~~~~~~^~
/app/function.h:7:20: error: 'nonExistingFunc' was not declared in this scope
    7 |     nonExistingFunc(T{});
 
**godbolt**: https://godbolt.org/z/YenTxT7jv