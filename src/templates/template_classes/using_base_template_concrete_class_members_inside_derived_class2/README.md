**result**:
```
class.h: In instantiation of 'void Derived<T>::func() [with T = double]':
/app/main.cpp:10:23:   required from here
   10 |     derivedDouble.func();
      |     ~~~~~~~~~~~~~~~~~~^~
/app/class.h:22:33: error: cannot call member function 'void Base<T>::baseFuncWithT(const T&) [with T = int]' without object
   22 |         Base<int>::baseFuncWithT(0);
```
**godbolt**: https://godbolt.org/z/b39xMnh6M