**result**:
error: cannot convert 'int (*)[2]' to 'int*'
   13 |     func(arr);
      |          ^~~
      |          |
      |          int (*)[2]
<source>:4:16: note:   initializing argument 1 of 'void func(int*)'
    4 | void func(int* arr)
**godbolt**: https://godbolt.org/z/498cGnMMf