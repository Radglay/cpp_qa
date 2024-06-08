**result**:
```
main.cpp:7:49: error: 'Base' is an inaccessible base of 'Derived'
    7 |     Base& base_ref = dynamic_cast<Base&>(derived);
```
**godbolt**: https://godbolt.org/z/vMbKv66Pf
