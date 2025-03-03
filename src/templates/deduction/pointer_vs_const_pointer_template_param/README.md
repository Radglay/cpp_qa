**result**:
error: redefinition of 'void func(T*) [with T = int]'
   14 | void func<int>(int* const)
      |      ^~~~~~~~~
<source>:8:6: note: 'void func(T*) [with T = int]' previously declared here
    8 | void func<int>(int*)
**godbolt**: https://godbolt.org/z/Tcf8cbqqa