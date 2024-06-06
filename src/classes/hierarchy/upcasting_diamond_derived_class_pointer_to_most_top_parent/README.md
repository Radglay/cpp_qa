**result**:
```
main.cpp:7:45: error: 'Base' is an ambiguous base of 'Diamond'
    7 |     Base* base_ptr = dynamic_cast<Diamond*>(&diamond);
```
**godbolt**: https://godbolt.org/z/PT77hvdoM
