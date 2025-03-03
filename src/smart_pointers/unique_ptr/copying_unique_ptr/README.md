**result**:
error: use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]'
   11 |     func(ptr);
      |     ~~~~^~~~~
In file included from /opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/memory:78,
                 from <source>:2:
/opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/bits/unique_ptr.h:516:7: note: declared here
  516 |       unique_ptr(const unique_ptr&) = delete;
      |       ^~~~~~~~~~
<source>:11:9: note: use '-fdiagnostics-all-candidates' to display considered candidates
   11 |     func(ptr);
      |     ~~~~^~~~~
<source>:5:32: note:   initializing argument 1 of 'void func(std::unique_ptr<int>)'
    5 | void func(std::unique_ptr<int> ptr)
**godbolt**: https://godbolt.org/z/5q9168ere