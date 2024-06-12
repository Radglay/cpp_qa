**result**:
```
class.h:10:10: error: templates may not be 'virtual'
   10 |     void virtual print()
      |          ^~~~~~~
/app/class.h:20:18: error: member template 'void Derived::print()' may not have virt-specifiers
   20 |     void print() override
```
**godbolt**: https://godbolt.org/z/vzex3YEWx