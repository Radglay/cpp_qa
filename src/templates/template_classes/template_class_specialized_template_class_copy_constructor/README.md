**result**:
 
class.h: In instantiation of 'Base<T>::Base(const Base<double>&) [with T = int]':
/app/main.cpp:9:48:   required from here
    9 |     baseInt = static_cast<Base<int>>(baseDouble);
      |                                                ^
/app/class.h:13:43: error: 'double Base<double>::val' is private within this context
   13 |         : val{static_cast<int>(baseDouble.val)}
 
**godbolt**: https://godbolt.org/z/Y7z8oenb8