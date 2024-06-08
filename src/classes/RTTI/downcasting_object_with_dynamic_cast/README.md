**result**:
```
main.cpp:7:17: error: cannot 'dynamic_cast' 'derived' (of type 'class Derived') to type 'class Base' (target is not pointer or reference)
    7 |     Base base = dynamic_cast<Base>(derived);
```
**godbolt**: https://godbolt.org/z/5bc38cYaq
