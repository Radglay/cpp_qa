**result**:
error: invalid initialization of reference of type 'int (&)[4]' from expression of type 'int*'
   14 |     func(arr);
      |          ^~~
<source>:4:17: note: in passing argument 1 of 'void func(int (&)[4])'
    4 | void func(int (&arr)[4])
**godbolt**: https://godbolt.org/z/vvxGfjqbq