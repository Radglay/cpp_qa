**result**:
 
function.h:13:6: error: redefinition of 'template<class T> void func(T, T)'
   13 | void func(const T, const T)
      |      ^~~~
/app/function.h:7:6: note: 'template<class T> void func(T, T)' previously declared here
    7 | void func(T, T)
 
**godbolt**: https://godbolt.org/z/eKnddveWP