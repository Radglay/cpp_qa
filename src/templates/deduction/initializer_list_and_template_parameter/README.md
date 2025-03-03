**result**:
error: no matching function for call to 'func(<brace-enclosed initializer list>)'
   17 |     func({1, 2, 3});
      |     ~~~~^~~~~~~~~~~
<source>:6:6: note: candidate: 'template<class T> void func(T)'
    6 | void func(T);
      |      ^~~~
<source>:6:6: note:   template argument deduction/substitution failed:
<source>:17:9: note:   couldn't deduce template parameter 'T'
   17 |     func({1, 2, 3});
**godbolt**: https://godbolt.org/z/bGGxM3Kxz