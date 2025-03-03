**result**:
error: invalid initialization of reference of type 'int (&)[10][2]' from expression of type 'int [4][2]'
   13 |     func(arr);
      |          ^~~
<source>:4:17: note: in passing argument 1 of 'void func(int (&)[10][2])'
    4 | void func(int (&arr)[10][2])
**godbolt**: https://godbolt.org/z/zWM74fbMn