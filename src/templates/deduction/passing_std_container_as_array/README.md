**result**:
error: no matching function for call to 'func(std::array<int, 10>&)'
   15 |     func(std_array);
      |     ~~~~^~~~~~~~~~~
<source>:6:6: note: candidate: 'template<class T, long unsigned int N> void func(T (&)[N])'
    6 | void func(T (&) [N])
      |      ^~~~
<source>:6:6: note:   template argument deduction/substitution failed:
<source>:15:9: note:   mismatched types 'T [N]' and 'std::array<int, 10>'
   15 |     func(std_array);
      |     ~~~~^~~~~~~~~~~
**godbolt**: https://godbolt.org/z/jav8q6j6a