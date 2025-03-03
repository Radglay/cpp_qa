**result**:
error: unable to deduce 'std::initializer_list<auto>' from '<brace-enclosed initializer list>()'
   29 |     auto var1 = {};
      |                  ^
<source>:29:18: note:   couldn't deduce template parameter 'auto'
<source>:30:16: error: direct-list-initialization of 'auto' requires exactly one element [-fpermissive]
   30 |     auto var2 {};
**godbolt**: https://godbolt.org/z/Y9nqn19Y8