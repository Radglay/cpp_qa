**result**:
```
class.h:10:15: error: declaration of template parameter 'T' shadows template parameter
   10 |     template <typename T>
      |               ^~~~~~~~
/app/class.h:6:11: note: template parameter 'T' declared here
    6 | template <typename T>
      |           ^~~~~~~~
```
**godbolt**: https://godbolt.org/z/6EErjxMrv