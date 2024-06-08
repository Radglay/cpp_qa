**result**:
```
class.h:25:9: error: conflicting return type specified for 'virtual int Derived::virt_func1()'
   25 |     int virt_func1() override
      |         ^~~~~~~~~~
/app/class.h:11:18: note: overridden function is 'virtual void Base::virt_func1()'
   11 |     virtual void virt_func1()
```
**godbolt**: https://godbolt.org/z/Tz63bfa5r
