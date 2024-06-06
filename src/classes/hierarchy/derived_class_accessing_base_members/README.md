**result**:
```
class.h: In member function 'int Derived::func()':
/app/class.h:21:16: error: 'int Base::private_x' is private within this context
   21 |         return private_x + protected_x + public_x;      
```
**godbolt**: https://godbolt.org/z/h1834osnM
