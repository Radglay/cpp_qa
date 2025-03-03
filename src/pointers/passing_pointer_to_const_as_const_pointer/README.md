**result**:
error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
   14 |     func(ptr);
      |          ^~~
      |          |
      |          const int*
<source>:4:22: note:   initializing argument 1 of 'void func(int*)'
    4 | void func(int* const ptr)
**godbolt**: https://godbolt.org/z/roda5cdGq