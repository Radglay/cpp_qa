**result**:
```
In instantiation of 'class Derived<double>':
/app/main.cpp:9:21:   required from here
    9 |     Derived<double> derivedDouble;
      |                     ^~~~~~~~~~~~~
/app/class.h:26:22: error: type 'Base<int>' is not a base type for type 'Derived<double>'
   26 |     using Base<int>::baseFunc;
```
**godbolt**: https://godbolt.org/z/KWb6qsKMP