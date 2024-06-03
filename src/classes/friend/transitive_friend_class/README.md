**result**:
```
class.h: In member function 'void A::func(Derived)':
/app/class.h:42:25: error: 'void Derived::privateDerivedFunc()' is private within this context
   42 |     d.privateDerivedFunc();
```
**godbolt**: https://godbolt.org/z/6937EWjjE

