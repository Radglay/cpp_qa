**result**:
```
class.cpp:13:14: error: invalid use of non-static data member 'Outer::outer_x'
   13 |     int x1 = outer_x;
class.cpp:14:15: error: cannot call member function 'void Outer::outer_func()' without object
   14 |     outer_func();
```
**godbolt**: https://godbolt.org/z/7fc9r8Pz8
