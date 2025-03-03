**result**:
error: use of deleted function 'std::unique_ptr<_Tp, _Dp>& std::unique_ptr<_Tp, _Dp>::operator=(std::unique_ptr<_Tp, _Dp>&&) [with _Tp = int; _Dp = void (&)(int*)]'
   24 |     ptr1 = std::move(ptr2);
      |                          ^
In file included from /opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/memory:78,
                 from <source>:2:
/opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/bits/unique_ptr.h:408:19: note: 'std::unique_ptr<_Tp, _Dp>& std::unique_ptr<_Tp, _Dp>::operator=(std::unique_ptr<_Tp, _Dp>&&) [with _Tp = int; _Dp = void (&)(int*)]' is implicitly deleted because the default definition would be ill-formed:
  408 |       unique_ptr& operator=(unique_ptr&&) = default;
**godbolt**: https://godbolt.org/z/rqerTssxn