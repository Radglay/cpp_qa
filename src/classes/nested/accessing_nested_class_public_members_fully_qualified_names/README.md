**result**:
```
error: invalid use of non-static data member 'Outer::Inner::inner_x'
    7 |    int x1 = Outer::Inner::inner_x
error: cannot call member function 'void Outer::Inner::inner_func()' without object
    8 |    Inner::inner_func();
```
**godbolt**: https://godbolt.org/z/6jf9vr6qa
