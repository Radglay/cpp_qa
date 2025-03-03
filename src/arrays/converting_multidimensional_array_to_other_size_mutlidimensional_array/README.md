**result**:
error: cannot convert 'int (*)[2]' to 'int (*)[10]'
   13 |     func(arr);
      |          ^~~
      |          |
      |          int (*)[2]
<source>:4:15: note:   initializing argument 1 of 'void func(int (*)[10])'
    4 | void func(int arr[10][10])
**godbolt**: https://godbolt.org/z/Thjr578TW