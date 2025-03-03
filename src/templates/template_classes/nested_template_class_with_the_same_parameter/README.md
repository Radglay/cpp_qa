**result**:
 
class.h:8:15: error: declaration of template parameter 'T' shadows template parameter
    8 |     template <typename T>
      |               ^~~~~~~~
/app/class.h:4:11: note: template parameter 'T' declared here
    4 | template <typename T>
      |           ^~~~~~~~
 
**godbolt**: https://godbolt.org/z/zKq8q6oMn