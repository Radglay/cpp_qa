**result**:
```
main.cpp:12:12: error: pointer to member type 'void (Derived::)() const' incompatible with object type 'Base'
   12 |     (base.*ptr)();
```
**godbolt**: https://godbolt.org/z/qsjYWsqE8