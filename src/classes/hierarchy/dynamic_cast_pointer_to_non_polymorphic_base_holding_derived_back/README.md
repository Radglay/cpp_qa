**result**:
```
main.cpp:8:28: error: cannot 'dynamic_cast' 'base_ptr' (of type 'class Base*') to type 'class Derived*' (source type is not polymorphic)
    8 |     Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
      |                            ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
```
**godbolt**: https://godbolt.org/z/fcP6nr3Tx
