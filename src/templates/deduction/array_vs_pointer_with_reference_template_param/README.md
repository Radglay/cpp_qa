**result**:
error: expected ',' or '...' before '&' token
   14 | void func<int[]>(int[]&)
      |                       ^
<source>:14:6: error: template-id 'func<int []>' for 'void func(int*)' does not match any template declaration
   14 | void func<int[]>(int[]&)
      |      ^~~~~~~~~~~
<source>:5:6: note: candidate is: 'template<class T> void func(T&)'
    5 | void func(T& t);
**godbolt**: https://godbolt.org/z/5Ma3o593f