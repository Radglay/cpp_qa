**result**:
error: cannot convert 'int (*)[2]' to 'int**'
   13 |     func(arr);
      |          ^~~
      |          |
      |          int (*)[2]
<source>:4:17: note:   initializing argument 1 of 'void func(int**)'
    4 | void func(int** ptr)
**godbolt**: https://godbolt.org/z/8Kvv5craz