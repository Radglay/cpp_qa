**result**:
```
main.cpp:9:48: error: no matching function for call to 'Base<int>::Base(Base<double>&)'
    9 |     baseInt = static_cast<Base<int>>(baseDouble);
```
**godbolt**: https://godbolt.org/z/dds6ovWce