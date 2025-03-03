**result**:
error: cannot bind rvalue reference of type 'std::unique_ptr<int>&&' to lvalue of type 'std::unique_ptr<int>'
   13 |     func(ptr);
      |          ^~~
<source>:5:34: note:   initializing argument 1 of 'void func(std::unique_ptr<int>&&)'
    5 | void func(std::unique_ptr<int>&& ptr)
**godbolt**: https://godbolt.org/z/j571dqcP6