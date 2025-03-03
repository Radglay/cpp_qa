**result**:
 
class.h: In member function 'void A::func(Base)':
/app/class.h:34:31: error: 'void Base::Nested::privateNestedFunc()' is private within this context
   34 |     b.nested.privateNestedFunc();
 
**godbolt**: https://godbolt.org/z/41dxWoc3T

