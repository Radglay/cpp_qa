**result**:
required from here
    9 |     stack.push(1);
      |     ~~~~~~~~~~^~~
/opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/bits/stl_stack.h:264:11: error: 'struct std::array<int, 5>' has no member named 'push_back'
  264 |       { c.push_back(std::move(__x)); }
      |         ~~^~~~~~~~~
/opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/bits/stl_stack.h: In instantiation of 'void std::stack<_Tp, _Sequence>::pop() [with _Tp = int; _Sequence = std::array<int, 5>]':
<source>:13:14:   required from here
   13 |     stack.pop();
      |     ~~~~~~~~~^~
/opt/compiler-explorer/gcc-14.2.0/include/c++/14.2.0/bits/stl_stack.h:294:11: error: 'struct std::array<int, 5>' has no member named 'pop_back'
  294 |         c.pop_back();
**godbolt**: https://godbolt.org/z/43TMesPof