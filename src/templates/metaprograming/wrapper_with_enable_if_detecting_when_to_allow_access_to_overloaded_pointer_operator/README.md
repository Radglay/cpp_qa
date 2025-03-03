**result**:
 
main.cpp:8:26:   required from here
    8 |     Wrapper wrapper_int(x);
      |                          ^
/app/class.h:19:64: error: no type named 'type' in 'struct std::enable_if<false, int>'
   19 |     typename std::enable_if<std::is_class<T>::value, T>::type* operator->()
      |                             
 
**godbolt**: https://godbolt.org/z/981erjGMr