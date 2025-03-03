**result**:
error: invalid initialization of reference of type 'int (&)[10]' from expression of type 'int [4]'
   13 |     func(arr);
      |          ^~~
<source>:4:17: note: in passing argument 1 of 'void func(int (&)[10])'
    4 | void func(int (&arr)[10])
**godbolt**: https://godbolt.org/z/eaodsK13M