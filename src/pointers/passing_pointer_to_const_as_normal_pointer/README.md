**result**:
error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
   14 |     func(ptr);
      |          ^~~
      |          |
      |          const int*
<source>:4:16: note:   initializing argument 1 of 'void func(int*)'
    4 | void func(int* ptr)
      |           ~~~~~^~~
**godbolt**: https://godbolt.org/z/sE9dsh6Tz