**result**:
```
main.cpp:7:17: error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
    7 |     int* ptr1 = &base.const_x;
      |                 ^~~~~~~~~~~~~
      |                 |
      |                 const int*
main.cpp:9:24: error: invalid conversion from 'const int Base::*' to 'int Base::*' [-fpermissive]
    9 |     int Base::* ptr2 = &Base::const_x;
      |                        ^~~~~~~~~~~~~~
      |                        |
      |                        const int Base::*
```
**godbolt**: https://godbolt.org/z/aK47nGnM9