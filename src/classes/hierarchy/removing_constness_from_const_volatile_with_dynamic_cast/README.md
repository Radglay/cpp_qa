**result**:
```
main.cpp:7:23: error: cannot 'dynamic_cast' 'base_ptr1' (of type 'const volatile class Base*') to type 'volatile class Base*' (conversion casts away constness)
    7 |     Base* base_ptr2 = dynamic_cast<volatile Base*>(base_ptr1);
```
**godbolt**: https://godbolt.org/z/M4fP8YMP8
