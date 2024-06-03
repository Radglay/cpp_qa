**result**:
```
class.h: In member function 'void A::func(Outer::Nested)':
/app/class.h:34:13: error: request for member 'privateNestedFunc' in 'n.Outer::Nested::outer', which is of pointer type 'Outer*' (maybe you meant to use '->' ?)
   34 |     n.outer.privateNestedFunc();
```
**godbolt**: https://godbolt.org/z/7Es7Tvjjb
