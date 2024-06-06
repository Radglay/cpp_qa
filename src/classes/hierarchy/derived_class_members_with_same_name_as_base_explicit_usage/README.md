**result**:
```
class.h:27:22: error: 'int Base::private_x' is private within this context
   27 |         return Base::private_x + Base::protected_x + Base::public_x;
```
**godbolt**: https://godbolt.org/z/GGf1Gs48f
